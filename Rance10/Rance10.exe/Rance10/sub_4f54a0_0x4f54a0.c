// 函数: sub_4f54a0
// 地址: 0x4f54a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736328
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4f40f0(arg1)
*(arg1 + 0xc) = 0
int32_t* esi = *(arg1 + 0x20)
struct _EXCEPTION_REGISTRATION_RECORD** i = *esi
struct _EXCEPTION_REGISTRATION_RECORD** var_48 = i

for (; i != esi; i = var_48)
    i[5][4].Next = 0
    sub_429080(&var_48)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0xa)
    *(arg1 + 0x84) = 0
label_4f5550:
    
    if (arg2 s< 3)
        char* edx_2 = *(arg3 + 4)
        var_48 = nullptr
        
        if (&edx_2[4] u> *(arg3 + 8))
        labelid_1:
            result.b = 0
        else
            var_48 =
                ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8 | zx.d(*edx_2)
            *(arg3 + 4) = &edx_2[4]
            void var_2c
            sub_403360(&var_2c, "%05d")
            int32_t var_8_1 = 0
            void var_44
            sub_409670(arg1 + 0x6c, sub_409350(&var_48, &var_2c, &var_44, &var_48))
            sub_403320(&var_44)
            int32_t var_8_2 = 0xffffffff
            sub_403320(&var_2c)
        label_4f5607:
            void* var_68_4 = arg3
            uint32_t var_54
            
            if (sub_4f1c20(arg1 + 4, arg2).b == 0)
            labelid_1:
                result.b = 0
            else if (sub_61ec90(arg3, &var_54).b == 0)
            labelid_1:
                result.b = 0
            else
                result = sub_4f52c0(arg1, arg3)
                *(arg1 + 0x58) = result
                
                if (result == 0)
                labelid_1:
                    result.b = 0
                else if (sub_61ec90(arg3, &var_48).b == 0)
                labelid_1:
                    result.b = 0
                else
                    result = var_48
                    
                    if (result s<= 0)
                    label_4f5568:
                        result.b = 0
                    else
                        int32_t esi_2 = 0
                        
                        if (result s> 0)
                            do
                                uint32_t var_50
                                
                                if (sub_61ec90(arg3, &var_50).b == 0)
                                    goto label_4f5568_2
                                
                                uint32_t var_4c
                                
                                if (sub_61ec90(arg3, &var_4c).b == 0)
                                    goto label_4f5568_2
                                
                                sub_4f4360(arg1, var_50, var_4c, 0xffffffff)
                                void* var_68_10 = arg1
                                
                                if (sub_4f37a0(sub_4f4f30(arg1), arg3).b == 0)
                                    goto label_4f5568_2
                                
                                esi_2 += 1
                            while (esi_2 s< var_48)
                        
                        uint32_t eax_15 = var_54
                        
                        if (eax_15 != 0)
                            *(arg1 + 0x68) = sub_4f47f0(arg1, eax_15)
                        
                        sub_4f1450(arg1 + 4, arg1)
                        result.b = 1
    else
        if (sub_61ed80(arg3, arg1 + 0x6c).b != 0)
            goto label_4f5607
        
    label_4f5568_1:
        result.b = 0
else
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        *(arg1 + 0x84) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        goto label_4f5550
    
label_4f5568_2:
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
