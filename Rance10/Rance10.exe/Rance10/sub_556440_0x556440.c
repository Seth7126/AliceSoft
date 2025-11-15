// 函数: sub_556440
// 地址: 0x556440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
var_4:3.b = *(arg1 + 0x70) != 0
sub_4263a0(arg2 + 4, &var_4:3)
sub_6ca100(arg2, 4)
void* i = arg1 + 0x7c

for (void* edi = i + 0x10; i != edi; i += 4)
    sub_6ca100(arg2, (*(**i + 8))())
    
    if ((*(**i + 0x40))(arg2) == 0)
        return 0

return 1
