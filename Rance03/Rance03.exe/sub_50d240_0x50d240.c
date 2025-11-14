// 函数: sub_50d240
// 地址: 0x50d240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* esi = arg2
int32_t ecx = esi[4]
int32_t* edx

if (esi[5] u< 0x10)
    edx = esi
else
    edx = *esi

int32_t ebp = *(arg1 + 0x20)

if (*(arg1 + 0x24) u< 0x10)
    arg2 = arg1 + 0x10
else
    arg2 = *(arg1 + 0x10)

int32_t eax_2 = ecx

if (ebp u< ecx)
    eax_2 = ebp

if (sub_405190(eax_2, edx, arg2, eax_2) == 0)
    int32_t ecx_2 = esi[4]
    
    if (ebp u>= ecx_2)
        int32_t eax_3
        eax_3.b = ebp != ecx_2
        
        if (eax_3 == 0 && *(arg1 + 0x28) == 1)
            char result = sub_50fe40(arg1 + 0x2c, arg3)
            
            if (result != 0)
                return result

if (arg1 + 0x10 != esi)
    sub_401ff0(arg1 + 0x10, esi, 0, 0xffffffff)

sub_4a6db0(arg1 + 0x2c, arg3)
sub_42f470(arg1 + 0x2c, 0xc)

if (*(arg1 + 0x28) != 1)
    *(arg1 + 0x28) = 1
    sub_50d490(arg1)

return sub_50d490(arg1)
