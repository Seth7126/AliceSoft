// 函数: ??$_Emplace_reallocate@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@?$vector@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@V?$allocator@UFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@@std@@@std@@QAEPAUFileSymbolInfo@?1??readHash@GSI1@@IAEHGJJ@Z@QAU2?1??34@IAEHGJJ@Z@$$QAU2?1??34@IAEHGJJ@Z@@Z
// 地址: 0x482740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ea20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0xc)
uint32_t ebx_2 = *arg4 u>> ((*(arg1 + 0x1c) == 0) + 1)
int32_t __saved_ebp
uint32_t ecx_3 = (*(*edi + 0x18))(__security_cookie ^ &__saved_ebp)

if (ecx_3 == 0)
    ecx_3 = 4
    uint32_t esi_3 = ((*(*edi + 0x1c))() * (*(*edi + 0xc))()) u>> 3
    
    if (esi_3 != 0)
        ecx_3 = esi_3

void* var_4c
__builtin_memset(&var_4c, 0, 0x18)
int32_t var_8_1 = 0
var_8_1.b = 1
sub_42c9c0(&var_4c, ebx_2)
void* var_40
sub_42c9c0(&var_40, ebx_2)
void* edi_1 = arg2

if (*(arg1 + 0x1c) == 0)
    int32_t edx_6 = 0
    
    if (ebx_2 u>= 4)
        void* esi_6 = edi_1 + 4
        void* ecx_8 = 0xfffffffc - edi_1
        void* var_2c_1 = ecx_8
        void* ebx_4 = var_4c
        int32_t i_4 = ((ebx_2 - 4) u>> 2) + 1
        void* edx_8 = var_40
        int32_t i
        
        do
            int32_t* ecx_9 = ecx_8 + esi_6
            *(ecx_9 + ebx_4) = _mm_cvtepi32_ps(zx.o(sx.d(*(esi_6 - 4))))
            *(ecx_9 + edx_8) = _mm_cvtepi32_ps(zx.o(sx.d(*(esi_6 - 2))))
            *(ecx_9 + ebx_4 + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*esi_6)))
            *(ecx_9 + edx_8 + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(esi_6 + 2))))
            int32_t* ecx_11 = 4 - edi_1 + esi_6
            *(ecx_11 + ebx_4) = _mm_cvtepi32_ps(zx.o(sx.d(*(esi_6 + 4))))
            *(ecx_11 + edx_8) = _mm_cvtepi32_ps(zx.o(sx.d(*(esi_6 + 6))))
            void* ecx_13 = 8 - edi_1 + esi_6
            *(ecx_13 + ebx_4) = _mm_cvtepi32_ps(zx.o(sx.d(*(esi_6 + 8))))
            int32_t eax_35 = sx.d(*(esi_6 + 0xa))
            esi_6 += 0x10
            *(ecx_13 + edx_8) = _mm_cvtepi32_ps(zx.o(eax_35))
            ecx_8 = var_2c_1
            i = i_4
            i_4 -= 1
        while (i != 1)
        edi_1 = arg2
        edx_6 = (((ebx_2 - 4) u>> 2) + 1) << 2
    
    if (edx_6 u< ebx_2)
        void* ecx_14 = var_4c
        void* esi_7 = var_40
        
        do
            *(ecx_14 + (edx_6 << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + (edx_6 << 2)))))
            *(esi_7 + (edx_6 << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + (edx_6 << 2) + 2))))
            edx_6 += 1
        while (edx_6 u< ebx_2)
else
    int32_t i_1 = 0
    
    if (ebx_2 u>= 4)
        void* esi_4 = var_4c
        void* ebx_3 = var_40
        void* edx_4 = edi_1 + 4
        
        do
            int32_t eax_13 = sx.d(*(edx_4 - 4))
            edx_4 += 8
            *(esi_4 + (i_1 << 2)) = _mm_cvtepi32_ps(zx.o(eax_13))
            *(ebx_3 + (i_1 << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 0xc))))
            *(esi_4 + (i_1 << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 0xa))))
            *(ebx_3 + (i_1 << 2) + 4) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 0xa))))
            *(esi_4 + (i_1 << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 8))))
            *(ebx_3 + (i_1 << 2) + 8) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 8))))
            *(esi_4 + (i_1 << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 6))))
            *(ebx_3 + (i_1 << 2) + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(*(edx_4 - 6))))
            i_1 += 4
        while (i_1 u< ebx_2 - 3)
        
        edi_1 = arg2
    
    if (i_1 u< ebx_2)
        void* edx_5 = var_4c
        void* esi_5 = var_40
        
        do
            *(edx_5 + (i_1 << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + (i_1 << 1)))))
            *(esi_5 + (i_1 << 2)) = _mm_cvtepi32_ps(zx.o(sx.d(*(edi_1 + (i_1 << 1)))))
            i_1 += 1
        while (i_1 u< ebx_2)

int32_t* esi_8 = *(arg1 + 0x10)
int32_t result = *(arg1 + 0x14)
uint32_t ebx_8 = (result - esi_8 + 3) u>> 2

if (esi_8 u> result)
    ebx_8 = 0

if (ebx_8 != 0)
    int32_t edi_3 = 0
    
    do
        (*(**esi_8 + 0xc))(&var_4c, &var_40, divu.dp.d(0:arg3, ecx_3))
        edi_3 += 1
        esi_8 = &esi_8[1]
    while (edi_3 != ebx_8)
    
    edi_1 = arg2

void* ebx_9 = var_4c
void* esi_9 = var_40
int32_t var_48

if (ebx_9 != var_48)
    int32_t var_3c
    int32_t i_5 = (var_3c - esi_9) s>> 2
    
    if (i_5 != 0)
        void* ecx_16 = esi_9
        void* ebx_11 = var_4c - esi_9
        int32_t i_3 = i_5
        int32_t i_2
        
        do
            edi_1 += 4
            ecx_16 += 4
            *(edi_1 - 4) = (int.d(fconvert.t(*(ebx_11 + ecx_16 - 4)))).w
            *(edi_1 - 2) = (int.d(fconvert.t(*(ecx_16 - 4)))).w
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        ebx_9 = var_4c
        esi_9 = var_40
    
    arg2:3.b = 1
    *arg4 = i_5 << 2
else
    arg2:3.b = 0

if (esi_9 != 0)
    int32_t var_38
    sub_403160(esi_9, (var_38 - esi_9) s>> 2, 4)
    ebx_9 = var_4c
    var_40 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0

int32_t var_44

if (ebx_9 != 0)
    sub_403160(ebx_9, (var_44 - ebx_9) s>> 2, 4)
result.b = arg2:3.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
