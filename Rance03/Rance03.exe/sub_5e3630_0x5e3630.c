// 函数: sub_5e3630
// 地址: 0x5e3630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cb00d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_dc
int32_t eax_2 = __security_cookie ^ &var_dc
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
enum MESSAGEBOX_RESULT result

if (sub_47a2e0(arg1 - 4) != 0)
    if (sub_4758f0() != 0)
        if (sub_449860() != 0)
            if (sub_44d3e0().b != 0)
                int32_t* ecx_4 = *(arg1 + 0x450)
                
                if (ecx_4 == 0)
                    result.b = 0
                else
                    result = (*(*ecx_4 + 0x14))(0x6eb320)
                    
                    if (result == 0)
                        result.b = 0
                    else
                        sub_401f60(&var_dc, (*(*(arg1 + 0x3c4) + 8))(eax_4))
                        int32_t var_c_1 = 0
                        void var_64
                        sub_4028a0(&var_64, &var_dc)
                        var_c_1.b = 2
                        sub_401fb0(&var_dc)
                        void var_c4
                        sub_401f60(&var_c4, (*(*(arg1 + 0x14) + 0x18))())
                        var_c_1.b = 3
                        void var_7c
                        sub_4028a0(&var_7c, &var_c4)
                        var_c_1.b = 5
                        sub_401fb0(&var_c4)
                        void var_ac
                        sub_401f60(&var_ac, 0x6da78d)
                        var_c_1.b = 6
                        sub_401f60(&var_dc, 0x6eb170)
                        var_c_1.b = 7
                        void var_4c
                        sub_5e12d0(&var_4c, &var_dc, &var_ac)
                        sub_401fb0(&var_dc)
                        var_c_1.b = 0xa
                        sub_401fb0(&var_ac)
                        void var_94
                        sub_401f60(&var_94, "MsgSkip.msk")
                        var_c_1.b = 0xb
                        void var_34
                        int32_t* eax_13 = sub_40d1c0(&var_7c, &var_64, &var_34, &var_7c)
                        var_c_1.b = 0xc
                        char* eax_14 = sub_410ad0(eax_13, eax_13, &var_c4, &var_4c)
                        var_c_1.b = 0xd
                        char* eax_15 = sub_410ad0(eax_14, eax_14, &var_ac, &var_94)
                        var_c_1.b = 0xe
                        int32_t ebx
                        ebx.b = sub_47d190((**result)(), eax_15) == 0
                        sub_401fb0(&var_ac)
                        sub_401fb0(&var_c4)
                        var_c_1.b = 0xb
                        sub_401fb0(&var_34)
                        
                        if (ebx.b == 0)
                            sub_47cd40()
                            sub_47ce20()
                            
                            if (sub_4a95a0() != 0)
                                ebx.b = 1
                            else
                                sub_64b530("PartsEngine")
                                ebx.b = 0
                        else
                            sub_64b530(0x6eb13c)
                            ebx.b = 0
                        
                        sub_401fb0(&var_94)
                        sub_401fb0(&var_4c)
                        sub_401fb0(&var_7c)
                        sub_401fb0(&var_64)
                        result.b = ebx.b
            else
                sub_64b530(0x6eb098)
                result.b = 0
        else
            sub_64b530(0x6eb0c4)
            result.b = 0
    else
        sub_64b530(0x6eb0ec)
        result.b = 0
else
    sub_64b530(0x6eafe0)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_dc)
return result
