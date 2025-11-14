// 函数: sub_52cc50
// 地址: 0x52cc50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_3 = ecx
        sub_52ccd0(arg1)
    
    struct sealengine::CBone::VTable** ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        sub_52cef0(ecx_4, arg2)
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2fa0be83, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 5
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_52ccd0(arg1)
    
    struct sealengine::CBone::VTable** ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        sub_52cef0(ecx_2, ((edx_2 u>> 0x1f) + edx_2) * 0xac + *arg1)
        arg1[1] += 0xac
        return 

arg1[1] += 0xac
