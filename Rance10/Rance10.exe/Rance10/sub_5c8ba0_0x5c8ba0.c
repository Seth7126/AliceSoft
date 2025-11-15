// 函数: sub_5c8ba0
// 地址: 0x5c8ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x91].b != 0)
    arg1[0x6c] = 1
    int32_t* edi_1 = arg1[0x93]
    void* eax_2
    
    if (((arg1[0x94] - edi_1) & 0xfffffffc) s<= 0)
        eax_2.b = 0
        return eax_2
    
    void* edi_2 = *edi_1
    
    if (edi_2 == 0)
        eax_2.b = 0
        return eax_2
    
    __Smtx_lock_shared(edi_2 + 0x44)
    int32_t* edi_3 = *(edi_2 + 0x40)
    __Smtx_unlock_shared(edi_2 + 0x44)
    
    if ((*(*edi_3 + 0x2c))(5, 1, 0, 1).b == 0)
        eax_2.b = 0
        return eax_2
    
    void* ecx_1 = *arg1
    int32_t xmm5_1 = *(ecx_1 + 0x54)
    int32_t xmm0_1 = **(ecx_1 + 0x68)
    float var_a8
    float* eax_6
    int32_t ecx_3
    eax_6, ecx_3 = sub_6ca9e0(ecx_1 + 0x48, &var_a8)
    int32_t var_c8_2 = ecx_3
    void var_9c
    struct IRenderShadowParam::sealengine::CRenderShadowParam::VTable* var_5c
    sub_5ca200(&arg1[3], 
        sub_5ca4d0(&var_5c, xmm5_1, sub_5dc570(&arg1[0x93], &var_9c), eax_6, xmm0_1))

int32_t eax
eax.b = 1
return eax
