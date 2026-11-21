#include <vector>

class FurryFeet {
    public:
        std::size_t feet_size;
};

int main() {
    std::vector<FurryFeet> feet_storage;
    feet_storage.resize(100);
}
