// 函数: sub_44a4c0
// 地址: 0x44a4c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6e70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* edi
int32_t* var_2c = edi
int32_t var_30 = __security_cookie ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = nullptr
int32_t var_1c = 0
var_20 = sub_418350()
int32_t var_4 = 0
void** arg_4
sub_44a940(arg_4, &var_20)
int32_t* eax_4 = var_20
int32_t* i = *eax_4

if (i != eax_4)
    do
        sub_44a660(&i[4], arg1 + 8)
        
        if (*(i + 0xd) == 0)
            int32_t* i_3 = i[2]
            
            if (*(i_3 + 0xd) != 0)
                int32_t* i_5 = i[1]
                
                if (*(i_5 + 0xd) == 0)
                    while (i == i_5[2])
                        i = i_5
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0xd) != 0)
                            break
                
                i = i_5
            else
                i = i_3
                int32_t* i_4 = *i
                
                while (*(i_4 + 0xd) == 0)
                    i = i_4
                    i_4 = *i
    while (i != var_20)

int32_t* i_2 = nullptr
int32_t var_14 = 0
i_2 = sub_418350()
var_4.b = 1
sub_44aae0(arg_4, &i_2)
int32_t* i_1 = i_2

for (int32_t* j = *i_1; j != i_1; i_1 = i_2)
    sub_44a4c0(&j[4])
    
    if (*(j + 0xd) == 0)
        int32_t* j_1 = j[2]
        
        if (*(j_1 + 0xd) != 0)
            int32_t* j_3 = j[1]
            
            if (*(j_3 + 0xd) == 0)
                while (j == j_3[2])
                    j = j_3
                    j_3 = j_3[1]
                    
                    if (*(j_3 + 0xd) != 0)
                        break
            
            j = j_3
        else
            j = j_1
            int32_t* j_2 = *j
            
            while (*(j_2 + 0xd) == 0)
                j = j_2
                j_2 = *j

sub_417e10(&i_2, &arg_4, *i_1, i_1)
j__free(i_2)
int32_t** eax_8 = var_20
sub_417e10(&var_20, &arg_4, *eax_8, eax_8)
int32_t result = j__free(var_20)
fsbase->NtTib.ExceptionList = ExceptionList
return result
