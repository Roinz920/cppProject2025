#include "DataHandler.h"

int DataHandler::LoadItems(const std::string& filename, Item items[])
{
    std::ifstream file(filename); // input file stream

    if (!file.is_open())  // 파일이 열려있는지에 대한 판별. 해석 : 파일이 만약 열리지 않았다면
    {
        std::cerr << "파일을 열지 못했습니다." << filename << std::endl;
        return 0;
    }

    int itemCount = 0;
    std::string line;
    // item의 항목을 읽어오기
    while (std::getline(file, line) && itemCount < MAX_ITMES)
    {
        std::istringstream iss(line);
        int index;
        std::string name;
        int price;
        int typeCount;
        int amount;

        // 대이터 파싱 : 외부 data의 정보가 단 한줄의 string으로 되어있는데, 이걸 하나하나 분해해서 가지고 오겠다는 뜻
        if (iss >> index >> name >> price >> typeCount >> amount)
        {
            ItemDataType newType(typeCount, amount);
            items[itemCount++] = Item(index, name, price, newType); // 우측에 있는 식을 구현한 이후, [] 내부에 있는 연산식을 처리하라는 방식의 코드 (실제로 처리속도가 조금 더 빠름)
        }
        else
        {
            std::cerr << "유효하지 않은 데이터가 존재합니다" << line << std::endl;
        }
    }

    file.close();
    return itemCount;
}
