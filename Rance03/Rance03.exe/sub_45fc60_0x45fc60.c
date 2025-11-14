// 函数: sub_45fc60
// 地址: 0x45fc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b60a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t var_48 = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_4 = 0
int32_t eax_5 = *(esi + 0xc)

if (eax_5 u> *(esi + 4))
    do
        arg1.b = **(esi + 4)
        
        if (arg1.b u>= 0x81 && arg1.b u<= 0x9f)
            break
        
        if (arg1.b u>= 0xe0 && arg1.b u<= 0xef)
            break
        
        if (arg1.b == 0xd)
            break
        
        if (arg1.b == 0xa)
            break
        
        char var_64_2
        
        if (arg1.b != 0x2e)
            char* eax_8
            eax_8.b = arg1.b
            eax_8.b -= 0x30
            
            if (eax_8.b u> 9)
                break
            
            var_64_2 = arg1.b
        else
            int32_t var_64_1 = 1
            var_54 = arg1.b
            void* eax_6
            eax_6, arg1 = sub_4294e0(&var_44, &var_54, arg1)
            
            if (eax_6 != 0xffffffff)
                break
            
            char* eax_7
            eax_7.b = **(esi + 4)
            var_64_2 = eax_7.b
        
        arg1 = sub_4031c0(&var_44, 1, var_64_2)
        *(esi + 4) += 1
    while (*(esi + 0xc) u> *(esi + 4))

if (eax_5 u<= *(esi + 4) || var_34 == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_402110(&var_2c, 0x6dcb50, 1)
    var_4.b = 1
    *arg2 = &exfile::CToken::`vftable'
    arg2[6] = 0xf
    arg2[5] = 0
    arg2[1].b = 0
    sub_401ff0(&arg2[1], &var_2c, 0, 0xffffffff)
    arg2[7] = 0x10
    arg2[8] = 0
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
else
    int32_t var_64_3 = 1
    var_54 = 0x2e
    
    if (sub_4294e0(&var_44, &var_54, arg1) != 0xffffffff)
        char* eax_11 = *(esi + 4)
        
        if (*eax_11 == 0x66)
            *(esi + 0x10) = eax_11
            *(esi + 4) = &eax_11[1]
            
            if (sub_45ff70(esi) == 0)
                *(esi + 4) = *(esi + 0x10)
                *(esi + 0x10) = 0
            
            *(esi + 0x10) = 0
    
    *arg2 = &exfile::CToken::`vftable'
    arg2[6] = 0xf
    arg2[5] = 0
    arg2[1].b = 0
    sub_401ff0(&arg2[1], &var_44, 0, 0xffffffff)
    arg2[7] = 0x10
    arg2[8] = 0

if (var_30 u>= 0x10)
    j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return arg2
