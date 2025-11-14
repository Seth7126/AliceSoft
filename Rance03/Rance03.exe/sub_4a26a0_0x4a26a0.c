// 函数: sub_4a26a0
// 地址: 0x4a26a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char ebx = 1

if (*(arg1 + 0x8d) != 0)
    ebx = arg2.b

int32_t* result = sub_4a42a0(arg1)
var_4:3.b = result.b
int32_t ecx_2 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)

if (ecx_2 s<= 0)
    goto label_4a26f4

int32_t var_10_1 = ecx_2

if (sub_4a56f0(*(arg1 + 0x54)) == 0)
label_4a26f0:
    result.b = var_4:3.b
label_4a26f4:
    
    if (*(arg1 + 0x8c) != 0 && ebx != 0 && result.b != 0)
        result.b = 1
        return result
else if (sub_4a26a0(arg2).b != 0)
    goto label_4a26f0

result.b = 0
return result
