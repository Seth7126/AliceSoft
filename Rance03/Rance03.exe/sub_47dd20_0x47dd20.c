// 函数: sub_47dd20
// 地址: 0x47dd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
sub_47ddc0(arg1)
char eax
int32_t ecx_1
eax, ecx_1 = sub_5076e0(arg1 + 8, 1, 1)

if (eax == 0)
    sub_455870(0x6ddb8c)
    int32_t* eax_1
    eax_1.b = 0
    return eax_1

int32_t eax_2 = sub_526cd0(ecx_1)

if (eax_2 == 0xffffffff)
    sub_455870(0x6ddbc4)
    int32_t* eax_3
    eax_3.b = 0
    return eax_3

void* edx = *(arg1 + 0xc)
int32_t edx_1

if (edx != 0)
    edx_1 = *(edx + 8)
else
    edx_1 = 0xffffffff

if (sub_5a2900(eax_2, edx_1) != 0)
    *(arg1 + 0x28) = eax_2
    return 1

sub_455870(0x6ddbfc)
int32_t* eax_5
eax_5.b = 0
return eax_5
