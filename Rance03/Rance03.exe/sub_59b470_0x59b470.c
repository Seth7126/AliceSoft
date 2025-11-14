// 函数: sub_59b470
// 地址: 0x59b470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = arg1

for (int32_t* i = ebp[1]; i != ebp[2]; i = &i[1])
    arg1 = *i
    
    if (arg1 != 0)
        (**arg1)(1)

int32_t ebx = 0
ebp[2] = ebp[1]
struct sealengine::CShadowMap::VTable** esi

while (true)
    struct sealengine::CShadowMap::VTable** eax_3 = sub_69adc6(0x2c8)
    
    if (eax_3 == 0)
        esi = nullptr
    else
        esi = sub_5923e0(eax_3, arg3)
    
    struct sealengine::CShadowMap::VTable** var_4 = esi
    
    if (sub_592690(esi, esi, arg2) == 0)
        break
    
    int32_t eax_6 = ebp[2]
    struct sealengine::CShadowMap::VTable*** ecx_3 = &var_4
    
    if (&var_4 u< eax_6)
        ecx_3 = ebp[1]
    
    if (&var_4 u>= eax_6 || ecx_3 u> &var_4)
        if (eax_6 == ebp[3])
            struct sealengine::CShadowMap::VTable*** var_1c_3 = ecx_3
            sub_412f20(&ebp[1])
        
        struct sealengine::CShadowMap::VTable*** eax_9 = ebp[2]
        
        if (eax_9 != 0)
            *eax_9 = esi
    else
        if (eax_6 == ebp[3])
            struct sealengine::CShadowMap::VTable*** var_1c_2 = ecx_3
            sub_412f20(&ebp[1])
        
        int32_t* ecx_5 = ebp[2]
        
        if (ecx_5 != 0)
            *ecx_5 = *(ebp[1] + ((&var_4 - ecx_3) s>> 2 << 2))
    
    ebp[2] += 4
    ebx += 1
    
    if (ebx s>= 1)
        ebp[4] = arg2
        int32_t result
        result.b = 1
        return result

if (esi != 0)
    (*esi)->vFunc_0(1)

return 0
