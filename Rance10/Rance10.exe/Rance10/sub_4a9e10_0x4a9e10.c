// 函数: sub_4a9e10
// 地址: 0x4a9e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
sub_6ca100(ebx, *(arg1 + 8))
int32_t* edi_1 = *(arg1 + 4)
void* i = *edi_1
arg2 = i

for (; i != edi_1; i = arg2)
    sub_6ca100(ebx, *(i + 0x10))
    sub_6ca100(ebx, *(i + 0x14))
    sub_429080(&arg2)

void* result
result.b = 1
return result
