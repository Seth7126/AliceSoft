// 函数: sub_5b27c0
// 地址: 0x5b27c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* edx = arg1
uint32_t* var_14 = edx
int32_t* arg_4
int32_t* ebx = arg_4
char* ecx = ebx[1]

if (&ecx[4] u> ebx[2])
label_5b28aa:
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

uint32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
ebx[1] = &ecx[4]

if ((edx[4] - edx[2]) s>> 2 u< edi_7)
    if (edi_7 u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_5b49e0(&edx[2], edi_7)
    edx = var_14

int32_t esi_1 = 0

if (edi_7 s> 0)
    do
        sub_5b28c0(edx, &arg_4, ebx)
        int32_t var_8_1 = 0
        
        if (arg_4 == 0)
            goto label_5b28aa
        
        sub_5b5010(&var_14[2], &arg_4)
        int32_t var_8_2 = 0xffffffff
        int32_t* ecx_5 = arg_4
        
        if (ecx_5 != 0)
            int32_t* var_2c_4 = ecx_5
            sub_5b4c50(ecx_5)
        
        edx = var_14
        esi_1 += 1
    while (esi_1 s< edi_7)

void* eax_9
eax_9.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
