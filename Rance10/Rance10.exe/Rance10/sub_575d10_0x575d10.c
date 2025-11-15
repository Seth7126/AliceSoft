// 函数: sub_575d10
// 地址: 0x575d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t ebx = arg_4
char* ecx = *(ebx + 4)

if (&ecx[4] u<= *(ebx + 8))
    uint32_t i_1 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(ebx + 4) = &ecx[4]
    int32_t var_8_1 = 0
    sub_42e7b0(*(*arg1 + 4))
    void* eax_8 = *arg1
    *(eax_8 + 4) = eax_8
    int32_t* eax_9 = *arg1
    *eax_9 = eax_9
    void* eax_10 = *arg1
    int32_t var_8_2 = 0xffffffff
    *(eax_10 + 8) = eax_10
    arg1[1] = 0
    
    if (*(ebx + 4) + (i_1 << 3) + 0x20 u<= *(ebx + 8))
        if (i_1 s> 0)
            uint32_t i
            
            do
                char* ecx_2 = *(ebx + 4)
                uint32_t eax_15 = zx.d(*ecx_2)
                uint32_t edx_6 = ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8
                *(ebx + 4) = &ecx_2[4]
                arg_4 = edx_6 | eax_15
                uint32_t edi_7 = ((zx.d(ecx_2[7]) << 8 | zx.d(ecx_2[6])) << 8 | zx.d(ecx_2[5])) << 8
                    | zx.d(ecx_2[4])
                *(ebx + 4) = &ecx_2[8]
                void* var_1c
                sub_42ebc0(arg1, &var_1c, &arg_4)
                *(var_1c + 0x14) = edi_7
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        char* ecx_5 = *(ebx + 4)
        uint32_t edx_14 =
            ((zx.d(ecx_5[3]) << 8 | zx.d(ecx_5[2])) << 8 | zx.d(ecx_5[1])) << 8 | zx.d(*ecx_5)
        *(ebx + 4) = &ecx_5[4]
        arg1[2] = edx_14
        char* ecx_6 = *(ebx + 4)
        uint32_t edx_21 =
            ((zx.d(ecx_6[3]) << 8 | zx.d(ecx_6[2])) << 8 | zx.d(ecx_6[1])) << 8 | zx.d(*ecx_6)
        *(ebx + 4) = &ecx_6[4]
        arg1[3] = edx_21
        char* ecx_7 = *(ebx + 4)
        uint32_t edx_28 =
            ((zx.d(ecx_7[3]) << 8 | zx.d(ecx_7[2])) << 8 | zx.d(ecx_7[1])) << 8 | zx.d(*ecx_7)
        *(ebx + 4) = &ecx_7[4]
        arg1[4] = edx_28
        char* ecx_8 = *(ebx + 4)
        uint32_t edx_35 =
            ((zx.d(ecx_8[3]) << 8 | zx.d(ecx_8[2])) << 8 | zx.d(ecx_8[1])) << 8 | zx.d(*ecx_8)
        *(ebx + 4) = &ecx_8[4]
        arg1[5] = edx_35
        char* ecx_9 = *(ebx + 4)
        uint32_t edx_42 =
            ((zx.d(ecx_9[3]) << 8 | zx.d(ecx_9[2])) << 8 | zx.d(ecx_9[1])) << 8 | zx.d(*ecx_9)
        *(ebx + 4) = &ecx_9[4]
        arg1[6] = edx_42
        char* ecx_10 = *(ebx + 4)
        uint32_t edx_49 =
            ((zx.d(ecx_10[3]) << 8 | zx.d(ecx_10[2])) << 8 | zx.d(ecx_10[1])) << 8 | zx.d(*ecx_10)
        *(ebx + 4) = &ecx_10[4]
        arg1[7] = edx_49
        char* ecx_11 = *(ebx + 4)
        uint32_t edx_56 =
            ((zx.d(ecx_11[3]) << 8 | zx.d(ecx_11[2])) << 8 | zx.d(ecx_11[1])) << 8 | zx.d(*ecx_11)
        *(ebx + 4) = &ecx_11[4]
        arg1[8] = edx_56
        char* ecx_12 = *(ebx + 4)
        uint32_t edx_63 =
            ((zx.d(ecx_12[3]) << 8 | zx.d(ecx_12[2])) << 8 | zx.d(ecx_12[1])) << 8 | zx.d(*ecx_12)
        *(ebx + 4) = &ecx_12[4]
        void* eax_52
        eax_52.b = 1
        arg1[9] = edx_63
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_52

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
