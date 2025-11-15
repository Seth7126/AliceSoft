// 函数: sub_5c22d0
// 地址: 0x5c22d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fef8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = nullptr
int32_t var_1c = 0
int32_t* edi = sub_42e780()
var_20 = edi
int32_t var_8_1 = 0
int32_t* esi_1 = *arg1
int32_t* eax_4 = *esi_1
int32_t* var_14 = eax_4

if (eax_4 != esi_1)
    do
        sub_5c1dc0(eax_4[5], &var_20)
        sub_429080(&var_14)
        eax_4 = var_14
    while (eax_4 != esi_1)
    
    edi = var_20

int32_t* i = *edi
int32_t result = 0
int32_t result_1 = 0

if (i != edi)
    do
        int32_t* ebx = i[4]
        var_14 = ebx
        __Smtx_lock_shared(&ebx[1])
        int32_t ebx_1 = *ebx
        __Smtx_unlock_shared(&var_14[1])
        int32_t eax_8
        
        if (ebx_1 != 0)
            __Smtx_lock_shared(&var_14[1])
            int32_t* ecx_2 = var_14
            int32_t* ebx_2 = *ecx_2
            __Smtx_unlock_shared(&ecx_2[1])
            __Smtx_lock_shared(&var_14[1])
            int32_t* ecx_3 = var_14
            var_14 = *ecx_3
            __Smtx_unlock_shared(&ecx_3[1])
            eax_8 = int.d(
                _mm_cvtepi32_ps(zx.o(((*(*ebx_2 + 0x10))(eax_2) * (*(*var_14 + 0x14))()) << 2))
                * 1.5f)
        else
            eax_8 = 0
        
        result = result_1 + eax_8
        bool cond:0_1 = *(i + 0xd) != 0
        result_1 = result
        
        if (not(cond:0_1))
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
    
    edi = var_20

sub_5c24b0(&var_20, &result_1, *edi, edi)
sub_403160(var_20, 1, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
