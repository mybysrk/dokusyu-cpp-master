#include <fstream>
#include <iostream>
#include <string>

int main()
{
    const std::string message = "This message is written as binary data.";
    const char* filename = "message.bin";

    {
        std::ofstream out{ filename, std::ios::binary };
        if (!out)
        {
            std::cerr << "ファイルを開けませんでした: " << filename << std::endl;
            return 1;
        }

        out.write(message.data(), static_cast<std::streamsize>(message.size()));
        if (!out)
        {
            std::cerr << "ファイルへの書き込みに失敗しました。" << std::endl;
            return 1;
        }
    }

    std::ifstream in{ filename, std::ios::binary };
    if (!in)
    {
        std::cerr << "ファイルを開けませんでした: " << filename << std::endl;
        return 1;
    }

    std::string readMessage(message.size(), '\0');
    in.read(&readMessage[0], static_cast<std::streamsize>(readMessage.size()));
    if (in.gcount() != static_cast<std::streamsize>(readMessage.size()))
    {
        std::cerr << "ファイルからの読み込みに失敗しました。" << std::endl;
        return 1;
    }

    std::cout << "読み込んだメッセージ: " << readMessage << std::endl;
    if (readMessage == message)
    {
        std::cout << "書き込んだデータと読み込んだデータは一致しています。" << std::endl;
    }
    else
    {
        std::cout << "書き込んだデータと読み込んだデータは一致しません。" << std::endl;
    }
}