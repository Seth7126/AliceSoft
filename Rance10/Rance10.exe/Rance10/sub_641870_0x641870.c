// 函数: sub_641870
// 地址: 0x641870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7463ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_7fcbc4
struct thread::CCriticalLock::VTable* const var_138 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(esi[0x5e] + 4)
char var_134 = 1
int32_t var_8_1 = 0
sub_641650(esi)
int32_t var_5c = *(arg1 + 4)
int32_t eax_7 = *(arg1 + 8)
int128_t var_54 = *(arg1 + 0xc)
struct textsurface::CTextSurfaceCacheProperty::VTable* const var_64 =
    &textsurface::CTextSurfaceCacheProperty::`vftable'
int32_t var_44 = *(arg1 + 0x1c)
int32_t var_40 = *(arg1 + 0x20)
int128_t xmm0_3 = *(arg1 + 0x24)
struct textsurface::CTextSurfaceProperty::VTable* const var_60 =
    &textsurface::CTextSurfaceProperty::`vftable'
int32_t var_58 = eax_7
int128_t var_3c = xmm0_3
var_8_1.b = 1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403590(&var_2c, arg2, 0, 0xffffffff)
var_8_1.b = 0
void** eax_8 = sub_642ad0(&esi[1], &var_64)
void** edi_2 = esi[1]
void** esi_1 = eax_8

if (esi_1 == edi_2)
    esi_1 = edi_2
else if (sub_643940(&var_60, &esi_1[5]) != 0)
    esi_1 = edi_2
else if (sub_6439e0(&var_60, &esi_1[5]) == 0 && sub_413c90(&var_2c, &esi_1[0x12]) != 0)
    esi_1 = edi_2

var_64 = &textsurface::CTextSurfaceCacheProperty::`vftable'

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
var_60 = &textsurface::CTextSurfaceProperty::`vftable'
int32_t* result

if (esi_1 == esi[1])
    int32_t eax_20 = *(arg1 + 4)
    int32_t edi_3 = *(arg1 + 8)
    int32_t eax_21
    
    if (eax_20 s>= 0x100)
        char eax_23
        
        if (esi[0x4e] == 0xffffffff)
            void* var_150_4 = &esi[0x56]
            eax_23 = sub_63f2b0(&esi[0x4b])
        
        if (esi[0x4e] != 0xffffffff || eax_23 != 0)
            int32_t eax_29
            int32_t edx_2
            edx_2:eax_29 = sx.q(sub_63f460(&esi[0x4b], eax_20 - 0x100, esi[0x18] * edi_3))
            esi[0x18]
            eax_21 = divs.dp.d(edx_2:eax_29, esi[0x18])
        else
            eax_21 = edi_3
    else
        eax_21 = edi_3
    
    var_54:0xc.d = &textsurface::CTextSurfaceProperty::`vftable'
    int32_t var_44_1 = *(arg1 + 4)
    int128_t var_3c_1 = *(arg1 + 0xc)
    var_2c.d = *(arg1 + 0x1c)
    int32_t var_28_1 = *(arg1 + 0x20)
    int128_t var_24_1 = *(arg1 + 0x24)
    void** var_150_6 = arg2
    var_8_1.b = 2
    int32_t var_40_1 = eax_21
    result = sub_640520(&esi[6], &var_54:0xc)
    
    if (result == 0)
        result = nullptr
    else
        int32_t esi_4 = *(arg1 + 4)
        float var_110_2
        
        if (esi_4 s>= 0x100)
            char eax_32
            
            if (esi[0x4e] == 0xffffffff)
                void* var_150_7 = &esi[0x56]
                eax_32 = sub_63f2b0(&esi[0x4b])
            
            if (esi[0x4e] != 0xffffffff || eax_32 != 0)
                int32_t esi_6 = esi[0x18] * edi_3
                int32_t eax_34 = sub_63f460(&esi[0x4b], esi_4 - 0x100, esi_6)
                var_110_2 = _mm_cvtepi32_ps(zx.o(esi_6)) / _mm_cvtepi32_ps(zx.o(eax_34))
            else
                var_110_2 = 1f
        else
            var_110_2 = 1f
        
        int32_t eax_36 = (*(*result + 0x10))(eax_2)
        int32_t eax_37 = (*(*result + 0x14))()
        int32_t ecx_16 = int.d(_mm_cvtepi32_ps(zx.o(eax_36)) * var_110_2)
        int32_t edx_5 = int.d(_mm_cvtepi32_ps(zx.o(eax_37)) * var_110_2)
        
        if (ecx_16 == eax_36 && edx_5 == eax_37)
            goto label_641c74
        
        int32_t* ecx_17 = esi[0x5f]
        
        if (ecx_17 == 0 || esi[0x60] == 0)
            result = nullptr
        else
            int32_t* result_1 = (*(*ecx_17 + 8))(ecx_16, edx_5, 0x20)
            
            if (result_1 == 0)
                result = nullptr
            else
                int32_t edx_6 = *esi[0x60]
                int32_t xmm0_17 = _mm_cvtepi32_ps(zx.o(eax_37))
                int32_t xmm0_19 = _mm_cvtepi32_ps(zx.o(eax_36))
                int32_t xmm0_21 = _mm_cvtepi32_ps(zx.o(edx_5))
                (*(edx_6 + 0x6c))(result_1, 0, 0, _mm_cvtepi32_ps(zx.o(ecx_16)), xmm0_21, result, 
                    0, 0, xmm0_19, xmm0_17)
                (*(*result + 4))()
                result = result_1
            label_641c74:
                struct textsurface::CTextSurfaceCache::VTable** eax_40 = sub_6e810c(0xc)
                var_8_1.b = 3
                int32_t edx_7 = esi[0x5c]
                esi[0x5c] = edx_7 + 1
                *eax_40 = &textsurface::CTextSurfaceCache::`vftable'
                eax_40[1] = result
                eax_40[2] = edx_7
                
                if (result != 0)
                    (**result)()
                
                struct textsurface::CTextSurfaceCacheProperty::VTable* var_b4 =
                    &textsurface::CTextSurfaceCacheProperty::`vftable'
                struct textsurface::CTextSurfaceProperty::VTable* const var_b0_1 =
                    &textsurface::CTextSurfaceProperty::`vftable'
                int32_t var_ac_1 = *(arg1 + 4)
                int128_t var_a4_1 = *(arg1 + 0xc)
                int32_t var_a8_1 = *(arg1 + 8)
                int32_t var_94_1 = *(arg1 + 0x1c)
                int32_t var_90_1 = *(arg1 + 0x20)
                int128_t var_8c_1 = *(arg1 + 0x24)
                var_8_1.b = 4
                int32_t var_68_1 = 0xf
                int32_t var_6c_1 = 0
                char var_7c = 0
                sub_403590(&var_7c, arg2, 0, 0xffffffff)
                var_8_1.b = 5
                struct textsurface::CTextSurfaceCache::VTable** var_bc_1 = eax_40
                var_8_1.b = 6
                struct textsurface::CTextSurfaceCache::VTable** var_150_11 = eax_40
                struct textsurface::CTextSurfaceCacheProperty::VTable* var_10c
                struct textsurface::CTextSurfaceCacheProperty::VTable** var_154_7 = &var_10c
                int32_t* var_128
                sub_642c00(&esi[1], &var_128, sub_642b60(&var_10c, &var_b4))
                sub_640160(&var_10c)
                var_8_1.b = 2
                sub_640160(&var_b4)
                int32_t esi_11 = ((*(*result + 0x14))() * (*(*result + 0x10))()) << 2
                esi[3] += esi_11
else
    int32_t ecx_6 = esi[0x5c]
    esi[0x5c] = ecx_6 + 1
    *(esi_1[0x18] + 8) = ecx_6
    void* esi_2 = esi_1[0x18]
    (***(esi_2 + 4))(eax_2)
    result = *(esi_2 + 4)

LeaveCriticalSection(esi[0x5e] + 4)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
