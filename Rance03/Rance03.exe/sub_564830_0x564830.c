// 函数: sub_564830
// 地址: 0x564830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
void* var_30 = nullptr
char var_40 = 0
sub_402110(&var_40, 0x6e4dc4, 0x11)
int32_t var_4 = 0
char* esi = &var_40
char* edx = &var_40
void* var_60 = arg1

if (var_2c u>= 0x10)
    esi = var_40.d

if (var_2c u>= 0x10)
    edx = var_40.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx, var_30 + esi)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t i = 0

if (((*(arg2 + 0x240) - *(arg2 + 0x23c)) & 0xfffffffc) s> 0)
    do
        if (i s> 0)
            var_2c = 0xf
            void* var_30_1 = nullptr
            var_40 = 0
            sub_402110(&var_40, 0x6e4dd8, 3)
            int32_t var_4_2 = 1
            char* esi_1 = &var_40
            int32_t* edx_1 = &var_40
            void* var_60_2 = arg1
            
            if (var_2c u>= 0x10)
                esi_1 = var_40.d
            
            if (var_2c u>= 0x10)
                edx_1 = var_40.d
            
            sub_468ff0(arg1 + 4, *(arg1 + 8), edx_1, var_30_1 + esi_1)
            int32_t var_4_3 = 0xffffffff
            
            if (var_2c u>= 0x10)
                j__free(var_40.d)
        
        uint32_t var_64
        var_64.q = _mm_cvtps_pd(*(*(arg2 + 0x23c) + (i << 2)))
        int32_t* ecx_4 = sub_4691f0(&var_40, "\t\t%f")
        int32_t var_4_4 = 2
        int32_t edx_2 = ecx_4[5]
        int32_t esi_2 = ecx_4[4]
        int32_t* eax_14
        
        if (edx_2 u< 0x10)
            eax_14 = ecx_4
        else
            eax_14 = *ecx_4
        
        if (edx_2 u>= 0x10)
            ecx_4 = *ecx_4
        
        void* var_60_4 = arg1
        sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_4, eax_14 + esi_2)
        int32_t var_4_5 = 0xffffffff
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        i += 1
    while (i s< (*(arg2 + 0x240) - *(arg2 + 0x23c)) s>> 2)

int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x6e4f20, 2)
int32_t var_4_6 = 3
char* esi_3 = &var_28
int32_t* edx_3 = &var_28
void* var_60_6 = arg1

if (var_14 u>= 0x10)
    esi_3 = var_28.d

if (var_14 u>= 0x10)
    edx_3 = var_28.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx_3, &esi_3[var_18])

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
