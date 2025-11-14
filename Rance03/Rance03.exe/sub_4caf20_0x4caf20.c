// 函数: sub_4caf20
// 地址: 0x4caf20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6beb48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_88 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (arg4 != 0 && *(arg1 + 0xc) == 0)
    void* ebp_1 = arg1 + 4
    
    if (sub_468b20(arg3, ebp_1) == 0)
        result = 0
    else if (sub_468b20(arg3, &var_74) == 0)
        result = 0
    else
        int32_t* var_38 = nullptr
        int32_t var_34_1 = 0
        var_38 = sub_458490()
        int32_t var_4 = 0
        int32_t* var_48 = nullptr
        int32_t var_44_1 = 0
        var_48 = sub_458490()
        var_4.b = 1
        int32_t* var_58 = nullptr
        int32_t var_54_1 = 0
        var_58 = sub_44b730()
        var_4.b = 2
        int32_t* var_68 = nullptr
        int32_t var_64_1 = 0
        var_68 = sub_44b730()
        var_4.b = 3
        int32_t* var_70 = nullptr
        int32_t var_6c_1 = 0
        var_70 = sub_44b730()
        var_4.b = 4
        int32_t* var_50 = nullptr
        int32_t var_4c_1 = 0
        var_50 = sub_44b730()
        var_4.b = 5
        int32_t* var_40 = nullptr
        int32_t var_3c_1 = 0
        var_40 = sub_44b730()
        var_4.b = 6
        int32_t* var_60 = nullptr
        int32_t var_5c_1 = 0
        var_60 = sub_44b730()
        var_4.b = 7
        int32_t var_30_1 = 0
        void* ebx
        
        if (var_74 s<= 0)
        label_4cb260:
            
            if (sub_4ca080(arg1, &var_38, arg4) == 0)
                ebx.b = 0
            else if (sub_4ca4f0(arg1, &var_58, arg4, sub_4a2af0, 0) == 0)
                ebx.b = 0
            else if (sub_4ca4f0(arg1, &var_68, arg4, sub_4a2c70, 0) == 0)
                ebx.b = 0
            else if (sub_4ca4f0(arg1, &var_70, arg4, sub_4a2cb0, 0) == 0)
                ebx.b = 0
            else if (sub_4ca4f0(arg1, &var_50, arg4, sub_4a2cd0, 0) == 0)
                ebx.b = 0
            else if (sub_4ca4f0(arg1, &var_40, arg4, sub_4a2cf0, 0) == 0)
                ebx.b = 0
            else if (sub_4ca4f0(arg1, &var_60, arg4, sub_4a2d10, 0) == 0)
                ebx.b = 0
            else if (sub_4ca2d0(arg1, &var_48, arg4) == 0)
                ebx.b = 0
            else if (sub_4ca680(arg1, arg3) == 0)
                ebx.b = 0
            else if (sub_4ca7d0(arg1, arg3) == 0)
                ebx.b = 0
            else
                char eax_49
                
                if (*ebp_1 s< 2)
                    eax_49 = sub_4cabb0(arg3)
                
                if (*ebp_1 s< 2 && eax_49 == 0)
                    ebx.b = 0
                else if (sub_4cae60(arg1, arg3) == 0)
                    ebx.b = 0
                else
                    ebx.b = 1
        else
            void* ecx_2 = arg4 + 0x128
            
            while (true)
                int32_t eax_13 = sub_4e7cb0(ecx_2)
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_4.b = 8
                
                if (sub_468d00(arg3, &var_2c) != 0
                        && sub_4c9f20(arg3, sub_4ccda0(&var_38, &var_2c)) != 0
                        && sub_4ca040(arg3, sub_44b300(&var_58, &var_2c)) != 0
                        && sub_4ca040(arg3, sub_44b300(&var_68, &var_2c)) != 0
                        && sub_4ca040(arg3, sub_44b300(&var_70, &var_2c)) != 0
                        && sub_4ca040(arg3, sub_44b300(&var_50, &var_2c)) != 0
                        && sub_4ca040(arg3, sub_44b300(&var_40, &var_2c)) != 0)
                    void* eax_27
                    int32_t ecx_11
                    eax_27, ecx_11 = sub_44b300(&var_60, &var_2c)
                    
                    if (sub_4ca040(arg3, eax_27) != 0)
                        int32_t var_98_1 = ecx_11
                        
                        if (sub_4a48f0(sub_4d6d70(arg4, eax_13), arg2, arg3, 1) != 0)
                            int32_t* ecx_15 = sub_4d6d70(arg4, eax_13)[0x17]
                            
                            if (ecx_15 == 0)
                            label_4cb21e:
                                
                                if (sub_4c9ab0(arg1, &var_2c, eax_13) != 0)
                                    var_4.b = 7
                                    sub_401fb0(&var_2c)
                                    ecx_2 = arg4 + 0x128
                                    int32_t eax_38 = var_30_1 + 1
                                    var_30_1 = eax_38
                                    
                                    if (eax_38 s< var_74)
                                        continue
                                    
                                    ebp_1 = arg1 + 4
                                    goto label_4cb260
                            else
                                if ((*(*ecx_15 + 8))(1) != 9)
                                    goto label_4cb21e
                                
                                if (sub_4c9f20(arg3, sub_4ccda0(&var_48, &var_2c)) != 0)
                                    goto label_4cb21e
                
                if (var_18_1 u< 0x10)
                    break
                
                j__free(var_2c.d)
                break
            
            ebx.b = 0
        
        int32_t** eax_51 = var_60
        sub_44b3e0(&var_60, &var_74, *eax_51, eax_51)
        j__free(var_60)
        int32_t** eax_52 = var_40
        sub_44b3e0(&var_40, &var_74, *eax_52, eax_52)
        j__free(var_40)
        int32_t** eax_53 = var_50
        sub_44b3e0(&var_50, &var_74, *eax_53, eax_53)
        j__free(var_50)
        int32_t* eax_54 = var_70
        sub_44b3e0(&var_70, &var_74, *eax_54, eax_54)
        j__free(var_70)
        int32_t* eax_55 = var_68
        sub_44b3e0(&var_68, &var_74, *eax_55, eax_55)
        j__free(var_68)
        int32_t* eax_56 = var_58
        sub_44b3e0(&var_58, &var_74, *eax_56, eax_56)
        j__free(var_58)
        int32_t* eax_57 = var_48
        sub_4cd030(&var_48, &var_74, *eax_57, eax_57)
        j__free(var_48)
        int32_t* ecx_37 = var_38
        sub_4cd030(&var_38, &var_74, *ecx_37, ecx_37)
        j__free(var_38)
        result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
