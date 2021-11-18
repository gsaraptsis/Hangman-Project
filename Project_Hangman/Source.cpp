#include "Intro.h"
#include "How_to_Play.h"
#include "Game.h"
using namespace ProjectHangman;
[STAThreadAttribute]
int main() {
    Intro fm;
    fm.ShowDialog();
    return 0;
}