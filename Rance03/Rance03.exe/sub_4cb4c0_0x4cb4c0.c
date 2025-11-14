// 函数: sub_4cb4c0
// 地址: 0x4cb4c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6beb88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CPartsList::VTable** var_80 = arg3
struct partsengine::CPartsList::VTable** vFunc_0

if (arg3 != 0)
    int32_t var_70 = arg2
    char* (__thiscall* var_68)(void* arg1, char* arg2, int32_t arg3) = sub_4c9930
    void* var_60_1 = arg1
    int32_t* var_18_1 = nullptr
    int32_t var_4 = 0
    int32_t var_5c = arg2
    void var_28
    void* var_54_1 = &var_28
    int32_t* var_50_1 = &var_70
    void var_81
    void* var_4c_1 = &var_81
    char* (__thiscall** var_48_1)(void* arg1, char* arg2, int32_t arg3) = &var_68
    int32_t* var_44_1 = &var_80
    void* var_58_1 = arg1
    sub_4cd910(&var_28, &var_5c)
    int32_t* edi_1 = *(arg1 + 8)
    vFunc_0 = *edi_1
    struct partsengine::CPartsList::VTable** vFunc = vFunc_0
    struct partsengine::CPartsList::VTable** edx_1
    void* ebx_1
    
    if (vFunc_0 == edi_1)
    label_4cb716:
        ebx_1.b = 1
    else
        while (true)
            int32_t var_48_2 = 0xf
            int32_t var_4c_2 = 0
            var_5c.b = 0
            sub_401ff0(&var_5c, &vFunc_0[4], 0, 0xffffffff)
            int32_t esi_2 = vFunc_0[0xa]
            int32_t var_44_2 = esi_2
            var_4.b = 1
            int32_t var_a0_2 = esi_2
            edx_1 = sub_4a52a0(&var_80[0x41])
            
            if (edx_1 != 0)
                int32_t eax_6 = edx_1[2]
                
                if (esi_2 s< eax_6 || edx_1[1] + eax_6 s<= esi_2)
                    vFunc_0 = nullptr
                label_4cb609:
                    
                    if (vFunc_0 != 0)
                        goto label_4cb61c
                else
                    vFunc_0 = edx_1[3][esi_2 - eax_6].vFunc_0
                    
                    if (vFunc_0 == 0)
                        vFunc_0, edx_1 = sub_4e7720(edx_1, esi_2)
                        goto label_4cb609
                    
                label_4cb61c:
                    char eax_9 = sub_4c9870(arg1, vFunc_0[0x16][0x24].vFunc_0)
                    
                    if (eax_9 != 0)
                    label_4cb6e6:
                        var_4.b = 0
                        
                        if (var_48_2 u>= 0x10)
                            j__free(var_5c)
                        
                        sub_418380(&vFunc)
                        vFunc_0 = vFunc
                        
                        if (vFunc_0 == edi_1)
                            goto label_4cb716
                        
                        continue
                    else
                        int32_t var_2c_1 = 0xf
                        int32_t var_30_1 = 0
                        char var_40 = eax_9
                        sub_402110(&var_40, 0x6e16b0, 2)
                        var_4.b = 2
                        void** eax_10 = sub_417ed0(arg1 + 8, &var_5c)
                        char eax_12
                        
                        if (eax_10 != *(arg1 + 8))
                            eax_12 = sub_40c3a0(&var_5c, &eax_10[4])
                        
                        void*** eax_13
                        
                        if (eax_10 == *(arg1 + 8) || eax_12 != 0)
                            void** var_74 = *(arg1 + 8)
                            eax_13 = &var_74
                        else
                            void** var_78 = eax_10
                            eax_13 = &var_78
                        
                        void** eax_15 = *eax_13
                        int32_t eax_16
                        
                        if (eax_15 != *(arg1 + 8))
                            eax_16 = eax_15[0xa]
                        else
                            eax_16 = 0
                        
                        int32_t var_6c = eax_16
                        
                        if (var_18_1 == 0)
                            sub_69a52d()
                            noreturn
                        
                        vFunc_0, edx_1 = (*(*var_18_1 + 8))(&var_6c, &var_40)
                        vFunc_0.b = vFunc_0.b == 0
                        char var_82_1 = vFunc_0.b
                        
                        if (var_2c_1 u>= 0x10)
                            vFunc_0, edx_1 = j__free(var_40.d)
                            vFunc_0.b = var_82_1
                        
                        if (vFunc_0.b == 0)
                            goto label_4cb6e6
            
            if (var_48_2 u>= 0x10)
                vFunc_0, edx_1 = j__free(var_5c)
            
            int32_t var_48_3 = 0xf
            ebx_1.b = 0
            int32_t var_4c_3 = 0
            var_5c.b = 0
            break
    
    int32_t var_4_1 = 0xffffffff
    
    if (var_18_1 != 0)
        edx_1.b = var_18_1 != &var_28
        (*(*var_18_1 + 0x10))(zx.d(edx_1.b))
    
    vFunc_0.b = ebx_1.b
else
    vFunc_0.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return vFunc_0
