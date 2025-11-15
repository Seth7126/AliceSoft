// 函数: sub_436270
// 地址: 0x436270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x43c) = 1
*(arg1 + 0x434) = arg2
HANDLE hHandle = *(arg1 + 8)

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)

if (*(arg1 + 0xc8) != *(arg1 + 0xcc))
    void** ecx = *(data_7fcb6c + 0x934)
    
    if (ecx != 0)
        int32_t var_2c_1 = *(arg1 + 0x42c)
        sub_488480(ecx)

int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 0x9e4) + 4))
void* eax_7 = *(arg1 + 0x9e4)
*(eax_7 + 4) = eax_7
int32_t* eax_8 = *(arg1 + 0x9e4)
*eax_8 = eax_8
void* eax_9 = *(arg1 + 0x9e4)
int32_t var_8_2 = 0xffffffff
*(eax_9 + 8) = eax_9
*(arg1 + 0x9e8) = 0
*(arg1 + 0x424) = sub_4350a0(arg1 + 0x30, arg2)
int32_t* ecx_3 = *(arg1 + 0x440)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    *(arg1 + 0x440) = 0

int16_t* i_2 = nullptr
int16_t* i = sub_436190(arg1)
int32_t var_18 = 0
int16_t* i_1 = i

if (i != 0)
    do
        i = sub_434460(arg1 + 0x1c, i, &var_18)
        
        if (i.b == 0)
            break
        
        i_2 = i_1
        
        if (arg2 s<= var_18)
            break
        
        i = sub_436190(arg1)
        var_18 = 0
        i_1 = i
    while (i != 0)
    
    if (i_2 != 0)
        int32_t* ecx_7 = data_7fcbd4
        
        if (ecx_7 != 0)
            i = (**ecx_7)(eax_2)
            int32_t* esi_2 = data_7fcbd4
            
            if (esi_2 != 0)
                int32_t eax_14 = (*(*esi_2 + 0xc))(*(arg1 + 0x34), *(arg1 + 0x38), 0x20)
                *(arg1 + 0x440) = eax_14
                int32_t eax_15 = *esi_2
                
                if (eax_14 == 0)
                    int32_t eax_16 = (*(eax_15 + 4))()
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_16
                
                (*(eax_15 + 4))()
                i = sub_435dc0(arg1, *(arg1 + 0x440), i_2)

fsbase->NtTib.ExceptionList = ExceptionList
return i
