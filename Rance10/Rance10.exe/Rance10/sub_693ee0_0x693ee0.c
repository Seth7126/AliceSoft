// 函数: sub_693ee0
// 地址: 0x693ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747bf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
char arg_4

if (arg_4 != 0)
    esi = 0x10

int32_t eax_3 = 0
void** arg_8

if (arg_8.b != 0)
    eax_3 = 8

int32_t eax_4 = 0

if (arg2 != 0)
    eax_4 = 4

int32_t eax_5 = 0

if (arg3 != 0)
    eax_5 = 2

int32_t eax_6
eax_6.b = arg4 != 0xffffffff
int32_t* esi_4 = esi | eax_3 | eax_4 | eax_5 | eax_6
arg_4.d = esi_4
sub_4cedf0(arg1 + 0x48, &arg_8, &arg_4)
void** eax_7 = arg_8
void** eax_8
char* var_24
void** esi_5

if (eax_7 != *(arg1 + 0x48))
    esi_5 = eax_7[5]
label_69401b:
    int32_t edi_2 = esi_5[3]
    void* esi_6 = esi_5[2]
    
    if (*(esi_6 + 0x15c) != edi_2)
        int32_t* eax_14 = *(esi_6 + 0x38)
        (*(*eax_14 + 0x24))(eax_14, edi_2, 0, 0)
        *(esi_6 + 0x15c) = edi_2
    
    if (sub_684c60(arg1 + 0x64, *(arg1 + 4)).b != 0)
        sub_422370(&var_24, 4)
        uint32_t eax_17 = zx.d((arg4 u>> 0x10).b)
        int32_t var_8_3 = 1
        char* edx = var_24
        uint32_t eax_21 = zx.d((arg4 u>> 8).b)
        *edx =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_17)) f+ *((eax_17 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        uint32_t eax_23 = zx.d(arg4.b)
        uint32_t ecx_15 = arg4 u>> 0x18
        *(edx + 4) =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_21)) f+ *((eax_21 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        *(edx + 8) =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_23)) f+ *((eax_23 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        *(edx + 0xc) =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_15)) f+ *((ecx_15 u>> 0x1f << 3) + &data_79aa70))
            * 0.00392156886f
        void* ebx
        ebx.b = sub_684cb0(arg1 + 0x64, edx, *(*(arg1 + 4) + 0x38)) != 0
        sub_4043e0(&var_24)
        int32_t eax_27
        eax_27.b = ebx.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_27
else
    var_24 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_8_1 = 0
    int32_t* var_38_1 = &var_24
    eax_8 = sub_682290(arg1 + 8, esi_4)
    char* edi_1 = var_24
    
    if (eax_8.b == 0)
        goto label_693fc6
    
    esi_5 = sub_686640(*(arg1 + 4))
    
    if (esi_5 != 0)
        void* var_38_2 = var_20_1 - edi_1
        
        if (sub_6895d0(esi_5, edi_1) != 0)
            void* var_18
            sub_4cfa60(arg1 + 0x48, &var_18, &arg_4)
            int32_t var_8_2 = 0xffffffff
            *(var_18 + 0x14) = esi_5
            sub_4059a0(&var_24)
            goto label_69401b
        
        (*(*esi_5 + 4))(eax_2)
    
label_693fc6:
    
    if (edi_1 != 0)
        sub_403160(edi_1, var_1c_1 - edi_1, 1)
eax_8.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
