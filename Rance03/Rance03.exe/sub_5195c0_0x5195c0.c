// 函数: sub_5195c0
// 地址: 0x5195c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
void** esi = arg1 + 0xdc
int32_t ebp = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t ebx = esi[4]
int32_t* ecx

if (esi[5] u< 0x10)
    ecx = esi
else
    ecx = *esi

int32_t eax_1 = ebp

if (ebx u< ebp)
    eax_1 = ebx

if (sub_405190(eax_1, edx, ecx, eax_1) == 0 && ebx u>= ebp)
    int32_t result
    result.b = ebx != ebp
    
    if (result == 0)
        return result

bool cond:2_1 = esi[5] u< 0x10
esi[4] = 0

if (not(cond:2_1))
    esi = *esi

*esi = nullptr
return sub_519700(arg1, arg2)
