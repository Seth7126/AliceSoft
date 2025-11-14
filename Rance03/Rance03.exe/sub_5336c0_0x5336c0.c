// 函数: sub_5336c0
// 地址: 0x5336c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

void* eax_3
struct sealengine::CLine::VTable** ecx_3

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_533890(arg1)
    
    ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        eax_3 = arg2 + 4
    label_53371d:
        int32_t (__fastcall* var_c_3)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
        *ecx_3 = &sealengine::CLine::`vftable'
        sub_69b6c8(&ecx_3[1], eax_3, 0x14, 2, sub_533d10)
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_533890(arg1)
    
    ecx_3 = arg1[1]
    
    if (ecx_3 != 0)
        eax_3 = (arg2 - eax) s/ 0x2c * 0x2c + *arg1 + 4
        goto label_53371d
arg1[1] += 0x2c
