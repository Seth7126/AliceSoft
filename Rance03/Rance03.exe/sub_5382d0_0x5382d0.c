// 函数: sub_5382d0
// 地址: 0x5382d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_160
int32_t eax_1 = __security_cookie ^ &var_160
float (* eax_6)[0x10]

if (arg5 == 0)
    void var_48
    eax_6 = &var_48
label_5383a4:
    void* var_170_3 = arg4
    sub_47c1a0(sub_5383e0(arg1, eax_6), arg3)
else if (arg5 == 1)
    void* var_170_2 = arg4
    struct sealengine::CEmitterRotate::VTable* var_158
    struct sealengine::CEmitterRotate::VTable* var_148
    struct sealengine::CEmitterRotate::VTable* var_128
    void var_c8
    sub_47c1a0(
        sub_5383e0(
            sub_538210(arg1, &var_148, 
                sub_538290(sub_538250(arg4, &var_158, arg1), arg2, &var_128)), 
            &var_c8), 
        arg3)
else
    float var_108[0x10]
    
    if (arg5 != 2)
        eax_6 = &var_108
        goto label_5383a4
    
    void* var_170 = arg4
    float var_138[0x4]
    float eax_8
    int32_t ecx_2
    eax_8, ecx_2 = sub_47c1a0(sub_5383e0(arg4, &var_108), &var_138)
    int32_t var_178_1 = ecx_2
    float var_118[0x4]
    float var_88[0x10]
    sub_5b1f80(sub_47c1a0(sub_5383e0(arg1, &var_88), &var_118), arg2, arg3, eax_8)
sub_69a5bc(eax_1 ^ &var_160)
return arg3
