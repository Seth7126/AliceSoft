// 函数: sub_4a9e60
// 地址: 0x4a9e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731736
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 4) + 4))
void* eax_4 = *(arg1 + 4)
void* esi = arg2
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 4)
*eax_5 = eax_5
void* eax_6 = *(arg1 + 4)
int32_t var_8_2 = 0xffffffff
*(eax_6 + 8) = eax_6
*(arg1 + 8) = 0
char* edx = *(esi + 4)

if (&edx[4] u> *(esi + 8))
label_4a9fad:
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

arg2 = nullptr
uint32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(esi + 4) = &edx[4]

if (ecx_7 s> 0)
    void* ecx_20
    
    do
        int32_t ebx_1 = *(esi + 8)
        
        if (*(esi + 4) + 4 u> ebx_1)
            goto label_4a9fad
        
        char* ecx_8 = *(esi + 4)
        uint32_t edx_7 =
            ((zx.d(ecx_8[3]) << 8 | zx.d(ecx_8[2])) << 8 | zx.d(ecx_8[1])) << 8 | zx.d(*ecx_8)
        *(esi + 4) = &ecx_8[4]
        
        if (&ecx_8[8] u> ebx_1)
            goto label_4a9fad
        
        uint32_t ecx_11 = zx.d(ecx_8[7]) << 8 | zx.d(ecx_8[6])
        uint32_t var_24 = edx_7
        uint32_t ecx_15 = (ecx_11 << 8 | zx.d(ecx_8[5])) << 8 | zx.d(ecx_8[4])
        *(esi + 4) = &ecx_8[8]
        uint32_t var_20_1 = ecx_15
        int32_t* eax_18
        void* ecx_17
        eax_18, ecx_17 = sub_435660(&var_24)
        int32_t* var_44_2 = eax_18
        void* var_48_1 = &eax_18[4]
        void** var_2c
        sub_42f0e0(arg1 + 4, &var_2c, ecx_17)
        ecx_20 = arg2 + 1
        arg2 = ecx_20
    while (ecx_20 s< ecx_7)

uint32_t eax_9
eax_9.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
