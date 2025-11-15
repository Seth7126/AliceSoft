// 函数: sub_641520
// 地址: 0x641520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a556
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct textsurface::CTextSurfaceManager::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
var_14 = arg1
*arg1 = &textsurface::CTextSurfaceManager::`vftable'
int32_t* edi = arg1[1]
int32_t* i = *edi

while (i != edi)
    int32_t* ecx = i[0x18]
    
    if (ecx != 0)
        (**ecx)(1)
    
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

int32_t var_8_1 = 0
sub_642760(arg1[1][1].vFunc_0)
void* eax_5 = arg1[1]
struct textsurface::CTextSurfaceManager::VTable** esi = var_14
*(eax_5 + 4) = eax_5
int32_t* eax_6 = arg1[1]
*eax_6 = eax_6
void* eax_7 = arg1[1]
*(eax_7 + 8) = eax_7
arg1[2] = 0
esi[3] = 0
esi[0x5c] = 0
esi[0x5d] = &thread::CCriticalSection::`vftable'
int32_t* ecx_2 = esi[0x5e]

if (ecx_2 != 0)
    (**ecx_2)(1)

sub_640360(&esi[6])
int32_t** eax_9 = arg1[1]
sub_6429b0(&arg1[1], &var_14, *eax_9, eax_9)
int32_t result = sub_403160(arg1[1], 1, 0x64)
fsbase->NtTib.ExceptionList = ExceptionList
return result
