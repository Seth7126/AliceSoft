// 函数: sub_569a30
// 地址: 0x569a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
int32_t* ebp = nullptr
int32_t* eax

if (arg2 != 0)
    if (arg2 u<= 0x9249249)
        eax = sub_69adc6(arg2 * 0x1c)
        ebp = eax
    
    if (arg2 u> 0x9249249 || ebp == 0)
        sub_69a4fc()
        noreturn

int32_t var_18 = arg2
sub_569cb0(eax, arg1[1], *arg1, ebp)
void* ecx_1 = *arg1
int32_t ebx = arg1[1]
int32_t* esi_3

if (ecx_1 == 0)
    esi_3 = arg1
else
    if (ecx_1 != ebx)
        void* ecx_2 = ecx_1
        
        do
            *(ecx_2 + 8) = &sealengine::CEmitterRotate::`vftable'
            ecx_2 += 0x1c
        while (ecx_2 != ebx)
    
    esi_3 = arg1
    j__free(*esi_3)

*esi_3 = ebp
esi_3[2] = &ebp[arg2 * 7]
void* result = &ebp[(ebx - ecx_1) s/ 0x1c * 7]
esi_3[1] = result
return result
