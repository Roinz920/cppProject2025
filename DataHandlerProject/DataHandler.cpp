#include "DataHandler.h"

int DataHandler::LoadItems(const std::string& filename, Item items[])
{
    std::ifstream file(filename); // input file stream

    if (!file.is_open())  // ������ �����ִ����� ���� �Ǻ�. �ؼ� : ������ ���� ������ �ʾҴٸ�
    {
        std::cerr << "������ ���� ���߽��ϴ�." << filename << std::endl;
        return 0;
    }

    int itemCount = 0;
    std::string line;
    // item�� �׸��� �о����
    while (std::getline(file, line) && itemCount < MAX_ITMES)
    {
        std::istringstream iss(line);
        int index;
        std::string name;
        int price;
        int typeCount;
        int amount;

        // ������ �Ľ� : �ܺ� data�� ������ �� ������ string���� �Ǿ��ִµ�, �̰� �ϳ��ϳ� �����ؼ� ������ ���ڴٴ� ��
        if (iss >> index >> name >> price >> typeCount >> amount)
        {
            ItemDataType newType(typeCount, amount);
            items[itemCount++] = Item(index, name, price, newType); // ������ �ִ� ���� ������ ����, [] ���ο� �ִ� ������� ó���϶�� ����� �ڵ� (������ ó���ӵ��� ���� �� ����)
        }
        else
        {
            std::cerr << "��ȿ���� ���� �����Ͱ� �����մϴ�" << line << std::endl;
        }
    }

    file.close();
    return itemCount;
}
