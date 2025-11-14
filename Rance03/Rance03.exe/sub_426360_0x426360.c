// 函数: sub_426360
// 地址: 0x426360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4e68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (sub_42c250(arg1 + 0x84c, arg2, *(arg1 + 0x8c)) == 0)
labelid_5:
    result = 0xffffffff
else
    SendMessageA(*(arg1 + 0x84c), 0x401, 0x9c8a, 0)
    SendMessageA(*(arg1 + 0x84c), 0x401, 0x9c8b, 1)
    SendMessageA(*(arg1 + 0x84c), 0x401, 0x9c8c, 1)
    HINSTANCE esi_1 = *(arg1 + 0x8c)
    sub_402110(arg1 + 0xb0, "DPVariable_SplitWndLRClass", 0x1a)
    *(arg1 + 0xe4) = 0x52000000
    *(arg1 + 0xf8) = arg2
    *(arg1 + 0xe8) = 0
    *(arg1 + 0xec) = 0
    
    if (sub_431d40(arg1 + 0xa8, esi_1) == 0)
    labelid_5:
        result = 0xffffffff
    else if (sub_42a110(arg1 + 0x144, (**(arg1 + 0xa8))(*(arg1 + 0x8c), eax_4)) == 0)
    labelid_5:
        result = 0xffffffff
    else
        int32_t i = 0
        void* var_34 = arg1 + 0x2f4
        void* ecx_5 = arg1 + 0x6f0
        void* var_30_1 = arg1 + 0x3f0
        void* var_2c_1 = arg1 + 0x4f0
        void* var_28_1 = arg1 + 0x5f4
        void* eax_16 = arg1 + 0x944
        
        do
            void* esi_2 = (&var_34)[i]
            *(esi_2 + 0xe0) = eax_16
            *(esi_2 + 0xe4) = ecx_5
            
            if (sub_42b750(esi_2, (**(arg1 + 0x144))(*(arg1 + 0x8c))) == 0)
                goto label_4266d7_2
            
            i += 1
            eax_16 = arg1 + 0x944
            ecx_5 = arg1 + 0x6f0
        while (i s< 4)
        
        int32_t var_58_4 = *(arg1 + 0x8c)
        *(arg1 + 0x7d0) = arg1 + 0x944
        *(arg1 + 0x810) = arg1 + 0x8e8
        int32_t eax_22 = *(arg1 + 0xa8)
        *(arg1 + 0x7d4) = arg1 + 0x6f0
        char eax_24
        int32_t ecx_10
        eax_24, ecx_10 = sub_42b750(arg1 + 0x6f0, (*eax_22)(var_58_4))
        
        if (eax_24 == 0)
        labelid_5:
            result = 0xffffffff
        else
            int32_t var_58_5 = ecx_10
            int32_t var_58_6 = sub_42b170(arg1 + 0x144, arg1 + 0x2f4, 0x6daa54)
            int32_t var_58_7 = sub_42b170(arg1 + 0x144, arg1 + 0x3f0, 0x6daa4c)
            int32_t var_58_8 = sub_42b170(arg1 + 0x144, arg1 + 0x4f0, 0x6daa64)
            sub_42b170(arg1 + 0x144, arg1 + 0x5f4, 0x6daa58)
            HWND eax_29 = CreateStatusWindowA(0x50000103, 0x6da08b, arg2, 0x9c91)
            *(arg1 + 0x8f0) = eax_29
            
            if (eax_29 == 0)
            label_4266d7:
                result = 0xffffffff
            else
                *(arg1 + 0x134) = (**(arg1 + 0x144))()
                *(arg1 + 0x138) = (**(arg1 + 0x6f0))()
                
                if (sub_428820(arg1 + 0x814, (**(arg1 + 0x144))(*(arg1 + 0x8c), arg1 + 0x944)) == 0)
                label_4266d7_1:
                    result = 0xffffffff
                else
                    *(arg1 + 0x2e8) = arg1 + 0x814
                    
                    if (sub_427280(arg1 + 0x854, *(arg1 + 0x8c), arg2, arg1 + 0x944) == 0)
                    label_4266d7_2:
                        result = 0xffffffff
                    else
                        CheckMenuRadioItem(*(arg1 + 0x54), 0x9c77, 0x9c79, 0x9c78, 0)
                        var_44 = 0x10
                        struct win32only::CRegistry::VTable* var_3c =
                            &win32only::CRegistry::`vftable'
                        int32_t var_38_1 = 0
                        int32_t var_c_1 = 0
                        sub_401f60(&var_34, "Software\Alicesoft\Sys43IDE\DPVariable")
                        void* ebx_3
                        ebx_3.b = sub_698340(&var_3c, 0x80000001, &var_34)
                        sub_401fb0(&var_34)
                        
                        if (ebx_3.b != 0)
                            sub_401f60(&var_34, "FontSize")
                            sub_698380(&var_3c, &var_34, &var_44)
                            sub_401fb0(&var_34)
                        
                        sub_426de0(arg1, var_44)
                        uint32_t esi_5 = zx.d(sub_698820(arg1 + 0x9b4, arg2, 0x3e8))
                        int32_t esi_6 = neg.d(esi_5)
                        sub_698320(&var_3c)
                        result = neg.d(sbb.d(esi_6, esi_6, esi_5 != 0)) - 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
