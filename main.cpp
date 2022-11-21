#include <filesystem>
#include <iostream>
#include <string>
#include <chrono>
#include <vector>

namespace fs = std::filesystem;
int main()
{
    std::string path_name = "/home/uluxa/trash/directory";
    std::vector<fs::directory_entry> sort_by_time;

    for (auto &entry : fs::directory_iterator(path_name))
    {
        if (entry.is_regular_file())
        {
            sort_by_time.push_back(entry);
        }
    }

    for(int i = 0; i < 10; i++)
    {
        for (auto const &entry: sort_by_time)
        {
            std::cout << entry.path().c_str() << std::endl;
        }
        std::cout << std::endl << std::endl << std::endl << std::endl;
    }
}