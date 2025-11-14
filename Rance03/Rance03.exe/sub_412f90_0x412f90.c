// 函数: sub_412f90
// 地址: 0x412f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = nullptr

if (arg2 != 0)
    if (arg2 u> 0x3fffffff)
        sub_69a4fc()
        noreturn
    
    esi = sub_69adc6(arg2 << 2)
    
    if (esi == 0)
        sub_69a4fc()
        noreturn

int32_t* ecx = *arg1
_memcpy(esi, ecx, (arg1[1] - ecx) & 0xfffffffc)
int32_t eax_6 = *arg1
int32_t ebp_2 = (arg1[1] - eax_6) s>> 2

if (eax_6 != 0)
    j__free(eax_6)

*arg1 = esi
arg1[2] = &esi[arg2]
void* result = &esi[ebp_2]
arg1[1] = result
return result
