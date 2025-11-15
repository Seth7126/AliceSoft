// 函数: sub_4ae310
// 地址: 0x4ae310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

char* ecx

if (*(arg1 + 0x54) u< 0x10)
    ecx = arg1 + 0x40
else
    ecx = *(arg1 + 0x40)

int32_t ebx = arg2[4]
int32_t eax_1 = ebx
int32_t ebp = *(arg1 + 0x50)

if (ebp u< ebx)
    eax_1 = ebp

void* result = sub_406ac0(eax_1, edx, ecx, eax_1)

if (result != 0 || ebp u< ebx || ebp u> ebx)
    if (arg1 + 0x40 != arg2)
        sub_403590(arg1 + 0x40, arg2, 0, 0xffffffff)
    
    result = arg1
    *(result + 0x72) = 1

return result
