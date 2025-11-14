// 函数: sub_5e6ad0
// 地址: 0x5e6ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cb498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edx = zx.d(arg3)

if (edx - 0x9c41 u<= 0x69)
    switch (edx)
        case 0x9c41
            sub_5e7500(arg1, arg2)
            sub_5e2500(arg1 + 0x124)
        case 0x9c42
            sub_5e6d00(arg1, arg2)
        case 0x9c43
            SendMessageA(arg2, 0x10, 0, 0)
        case 0x9c44
            void var_34
            char* eax_13 = sub_5e4660(*(arg1 + 0x254), &var_34)
            int32_t var_c_1 = 0
            void var_4c
            char* eax_15 = sub_401f60(&var_4c, (*(*(*(arg1 + 0x254) + 0x18) + 4))(eax_4))
            var_c_1.b = 1
            void var_64
            char* eax_16 = sub_410a80(eax_15.b, eax_15, &var_64, "\r\n\r\nVersion ")
            var_c_1.b = 2
            int32_t* var_7c
            sub_410a20(eax_16, eax_16, &var_7c, eax_13)
            sub_401fb0(&var_64)
            sub_401fb0(&var_4c)
            sub_401fb0(&var_34)
            int32_t* eax_17 = &var_7c
            int32_t var_68
            
            if (var_68 u>= 0x10)
                eax_17 = var_7c
            
            sub_64b6b0(eax_17)
            sub_401fb0(&var_7c)
        case 0x9c4a, 0x9c4b, 0x9c4c, 0x9c4d, 0x9c4e, 0x9c4f, 0x9c50, 0x9c51, 0x9c52, 0x9c53
            void* ecx_1 = *(arg1 + 0x254)
            
            if (edx - 0x9c4a s>= 0 && edx - 0x9c4a s< (*(ecx_1 + 0x478) - *(ecx_1 + 0x474)) s>> 2)
                int32_t* ecx_2 = *(*(ecx_1 + 0x474) + ((edx - 0x9c4a) << 2))
                
                if (ecx_2 != 0)
                    (*(*ecx_2 + 0xc))(eax_4)
        case 0x9caa
            sub_5e8740(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return 0
