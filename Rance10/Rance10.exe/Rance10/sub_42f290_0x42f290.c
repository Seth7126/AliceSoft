// 函数: sub_42f290
// 地址: 0x42f290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IAFAFile>::afafactory::CAFAFile::VTable** ebx = arg1
struct common::SuicideRefCounter<class IAFAFile>::afafactory::CAFAFile::VTable** var_34 = ebx
*ebx = &afafactory::CAFAFile::`vftable'{for `common::SuicideRefCounter<class IAFAFile>'}
int32_t* edi = ebx[3]
int32_t* i = *edi

if (i != edi)
    do
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_403590(&var_30, &i[4], 0, 0xffffffff)
        void* eax_3 = i[0xa]
        void* var_18_1 = eax_3
        
        if (eax_3 != 0)
            int32_t ecx_1 = *(eax_3 + 0x24)
            void* ebx_2 = eax_3 + 0x10
            
            if (ecx_1 u>= 0x10)
                sub_403160(*ebx_2, ecx_1 + 1, 1)
            
            *(ebx_2 + 0x14) = 0xf
            bool cond:0_1 = *(ebx_2 + 0x14) u< 0x10
            *(ebx_2 + 0x10) = 0
            
            if (not(cond:0_1))
                ebx_2 = *ebx_2
            
            int32_t var_4c_1 = 0x28
            *ebx_2 = 0
            operator new(eax_3)
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != edi)
    
    ebx = var_34

sub_417070(&ebx[8])
sub_417070(&ebx[5])
int32_t** eax_7 = ebx[3]
sub_431c90(&ebx[3], &var_34, *eax_7, eax_7)
int32_t result = sub_403160(ebx[3], 1, 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
