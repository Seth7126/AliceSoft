// 函数: sub_427af0
// 地址: 0x427af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4f98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = nullptr
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_4 = 0
struct filesystem::CFile::VTable* const var_44 = &filesystem::CFile::`vftable'
int32_t var_40 = 0xffffffff
int32_t var_3c = 0
int32_t var_38 = 0
var_4.b = 1
bool cond:0 = sub_604a80(arg2, &var_6c).b == 0
var_4.b = 0
char* edi = var_6c
BOOL result
result.b = cond:0
int32_t* ebx

if (result.b != 0 || var_68 - edi u< 0xc || *edi != 0x4a || edi[1] != 0x44 || edi[2] != 0x47
        || edi[3] != 0x33 || *(edi + 4) != 1)
    ebx.b = 0
else
    int32_t i_1 = *(edi + 8)
    void var_5c
    sub_401f60(&var_5c, "System")
    var_4.b = 2
    sub_412d60(&arg1[2], &var_5c)
    var_4.b = 0
    sub_401fb0(&var_5c)
    sub_401f60(&var_5c, 0x6dabfc)
    var_4.b = 3
    sub_412d60(&arg1[2], &var_5c)
    var_4.b = 0
    sub_401fb0(&var_5c)
    
    if (i_1 s> 0)
        void* edi_1 = &edi[0xc]
        int32_t i
        
        do
            sub_401f60(&var_5c, edi_1)
            var_4.b = 4
            void* var_4c
            void* esi_3 = var_4c + 1 + edi_1
            sub_401f60(&var_44, esi_3)
            var_4.b = 5
            void* var_34
            edi_1 = var_34 + 0x11 + esi_3
            var_4.b = 6
            void var_2c
            int32_t eax_9 = sub_427d10(arg1, sub_427e90(&var_2c, &var_44))
            var_4.b = 5
            sub_401fb0(&var_2c)
            *sub_427f90(arg1, &var_5c) = eax_9
            sub_401fb0(&var_44)
            var_4.b = 0
            sub_401fb0(&var_5c)
            i = i_1
            i_1 -= 1
        while (i != 1)
        edi = var_6c
    
    ebx.b = 1

if (edi != 0)
    j__free(edi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
