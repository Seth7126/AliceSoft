// 函数: sub_511190
// 地址: 0x511190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
struct _EXCEPTION_RECORD var_58
var_58.ExceptionInformation[0xe] = sub_737f56
TEB* fsbase
var_58.ExceptionInformation[0xd] = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
var_58.ExceptionInformation[0xc] = eax_2
int32_t var_94 = eax_2
var_10
fsbase->NtTib.ExceptionList = &var_10
struct partsengine::CPartsList::VTable** var_68 = arg3
struct partsengine::CPartsList::VTable** vFunc_0

if (arg3 != 0)
    int32_t var_78 = arg2
    char* (__thiscall* var_84)(int32_t* arg1, char* arg2, int32_t arg3) = sub_5108d0
    int32_t* var_7c_1 = arg1
    var_58.ExceptionInformation[4] = 0
    int32_t var_8_1 = 0
    var_58.ExceptionInformation[5] = arg2
    var_58.ExceptionInformation[7] = &var_58
    var_58.ExceptionInformation[8] = &var_78
    void var_61
    var_58.ExceptionInformation[9] = &var_61
    var_58.ExceptionInformation[0xa] = &var_84
    var_58.ExceptionInformation[0xb] = &var_68
    var_58.ExceptionInformation[6] = arg1
    var_30
    sub_514280(&var_58, &var_30)
    int32_t* ebx_1 = *arg1
    vFunc_0 = *ebx_1
    struct partsengine::CPartsList::VTable** vFunc = vFunc_0
    struct partsengine::CPartsList::VTable** edx_1
    
    if (vFunc_0 == ebx_1)
    label_511366:
        ebx_1.b = 1
    else
        while (true)
            struct partsengine::CPartsList::VTable** ecx_1 = var_68
            int32_t* var_60 = &vFunc_0[4]
            int32_t esi_1 = vFunc_0[0xa]
            int32_t var_98_2 = esi_1
            edx_1 = sub_4f14d0(&ecx_1[0xd])
            
            if (edx_1 != 0)
                int32_t eax_5 = edx_1[2]
                
                if (esi_1 s< eax_5 || edx_1[1] + eax_5 s<= esi_1)
                    vFunc_0 = nullptr
                label_511279:
                    
                    if (vFunc_0 != 0)
                        goto label_511284
                else
                    vFunc_0 = edx_1[3][esi_1 - eax_5].vFunc_0
                    
                    if (vFunc_0 == 0)
                        int32_t var_98_3 = esi_1
                        vFunc_0, edx_1 = sub_526580(edx_1)
                        goto label_511279
                    
                label_511284:
                    int32_t vFunc_0_1 = vFunc_0[0x1c][0x2f].vFunc_0
                    int32_t* esi_2 = *arg1
                    void* eax_9 = *esi_2
                    void* var_6c = eax_9
                    
                    if (eax_9 != esi_2)
                        while (vFunc_0_1 != *(eax_9 + 0x28))
                            sub_429080(&var_6c)
                            eax_9 = var_6c
                            
                            if (eax_9 == esi_2)
                                goto label_5112c2
                        
                        goto label_511356
                    
                label_5112c2:
                    var_58.ExceptionInformation[0xb] = 0xf
                    var_58.ExceptionInformation[0xa] = 0
                    var_58.ExceptionInformation[6].b = 0
                    var_2c
                    sub_403490(&var_2c, "*\t", 2)
                    var_8_1.b = 1
                    void** eax_10 = sub_432330(arg1, var_60)
                    void** edi_2 = *arg1
                    void** esi_3 = eax_10
                    char eax_12
                    
                    if (esi_3 != edi_2)
                        eax_12 = sub_412ca0(var_60, &esi_3[4])
                    
                    if (esi_3 == edi_2 || eax_12 != 0)
                        esi_3 = edi_2
                    
                    int32_t* eax_13
                    
                    if (esi_3 != edi_2)
                        eax_13 = esi_3[0xa]
                    else
                        eax_13 = nullptr
                    
                    uint32_t ecx_11 = var_58.ExceptionInformation[4]
                    var_60 = eax_13
                    
                    if (ecx_11 == 0)
                        sub_6d090a()
                        noreturn
                    
                    char eax_16
                    eax_16, edx_1 = (*(*ecx_11 + 8))(&var_60, &var_2c)
                    var_8_1.b = 0
                    vFunc_0 = var_58.ExceptionInformation[0xb]
                    
                    if (vFunc_0 u>= 0x10)
                        vFunc_0, edx_1 = sub_403160(var_58.ExceptionInformation[6], vFunc_0 + 1, 1)
                    
                    if (eax_16 != 0)
                    label_511356:
                        sub_429080(&vFunc)
                        vFunc_0 = vFunc
                        
                        if (vFunc_0 == ebx_1)
                            goto label_511366
                        
                        continue
            
            ebx_1.b = 0
            break
    
    int32_t var_8_2 = 2
    uint32_t ecx_13 = var_58.ExceptionInformation[4]
    
    if (ecx_13 != 0)
        edx_1.b = ecx_13 != &var_58
        (*(*ecx_13 + 0x10))(zx.d(edx_1.b))
    
    vFunc_0.b = ebx_1.b
else
    vFunc_0.b = 0

fsbase->NtTib.ExceptionList = var_58.ExceptionInformation[0xd]
@__security_check_cookie@4(var_58.ExceptionInformation[0xc] ^ &__saved_ebp)
return vFunc_0
