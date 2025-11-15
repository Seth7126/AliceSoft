// 函数: sub_50c1d0
// 地址: 0x50c1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737b40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_50 = arg1
void* var_2c
int32_t* ecx = &var_2c
*(arg1[0x2a] + 0xaa) = 0
void* eax_4
eax_4.b = *(arg2 + 0xa8)
int32_t result
struct partsengine::IEventArgs::partsengine::SChangedEventArgs::VTable* const var_54
int32_t result_2

if (eax_4.b != 0)
    void** var_68_1 = &arg1[0x39]
    char eax_10 = sub_4090e0(&arg1[0x56], sub_4079d0(eax_4, &arg1[0x33], ecx, &arg1[0x39]))
    
    if (result_2 u>= 0x10)
        sub_403160(var_2c, result_2 + 1, 1)
    
    if (eax_10 != 0)
        sub_403490(&arg1[0x33], &data_75d2d5, nullptr)
        
        if (&arg1[0x39] != &arg1[0x56])
            sub_403590(&arg1[0x39], &arg1[0x56], 0, 0xffffffff)
    
    float xmm0_1 = sub_50f870(arg1)
    float xmm0_2 = sub_50f8e0(arg1)
    int32_t edi_2 = arg1[0x46]
    int32_t ebx_2 = arg1[0x47]
    int32_t* var_a4 = &std::_Func_impl<class <lambda_e2850cee5638a1b91277f346b9523c28>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_a0_1 = arg1
    int32_t** var_80_10 = &var_a4
    sub_4c2b20(&arg1[0x10], var_a4)
    void* eax_12 = arg1[0x28]
    *(eax_12 + 0x90) = xmm0_1
    *(eax_12 + 0x94) = xmm0_2
    void* eax_13 = sub_4efcc0(arg1[0x29])
    int32_t ecx_15 = arg1[0x86]
    void* edx_5 = arg1[0x29]
    *(edx_5 + 0x90) = _mm_cvtepi32_ps(zx.o(arg1[0x88])) + xmm0_1
    *(edx_5 + 0x94) = _mm_cvtepi32_ps(zx.o(ecx_15)) + xmm0_2
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_14 = sub_4ef140(arg1[0x2b])
    void* esi_1 = arg1[0x2b]
    float xmm0_12 = _mm_cvtepi32_ps(zx.o(edi_2))
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        * edx_6 = *eax_14
    int32_t var_80_11 = 1
    var_54 = xmm0_12 + xmm0_1
    int32_t eax_15 = edx_6->vFunc_9(var_80_11)
    float xmm1_2 = var_54 f- _mm_cvtepi32_ps(zx.o(eax_15))
    *(esi_1 + 0x94) = xmm0_2
    *(esi_1 + 0x90) = xmm1_2
    int32_t* esi_2 = var_50
    int32_t* eax_16 = sub_4ef220(esi_2[0x2c])
    void* esi_3 = esi_2[0x2c]
    float xmm0_18 = _mm_cvtepi32_ps(zx.o(ebx_2))
    int32_t edx_7 = *eax_16
    int32_t var_80_12 = 1
    var_54 = eax_16
    int32_t eax_17 = (*(edx_7 + 0x28))(var_80_12)
    int32_t* ebx_3 = var_50
    float xmm1_4 = xmm0_18 + xmm0_2 - _mm_cvtepi32_ps(zx.o(eax_17))
    *(esi_3 + 0x90) = xmm0_1
    *(esi_3 + 0x94) = xmm1_4
    
    if ((*(*ebx_3 + 0x18))(eax_2) != 0)
        void* eax_21 = sub_4ee010(ebx_3[0x8b])
        
        if (eax_21 != 0)
            void* eax_22
            eax_22.b = *(eax_21 + 0x40) == sub_4f46e0(data_7fcba4 + 0x124)
            
            if (eax_22.b != 0)
                sub_50cf00(ebx_3, xmm0_1)
                
                if (sub_50d8d0(ebx_3, ebx_3[0x31]) != 0)
                    *(ebx_3[0x2a] + 0xaa) = 1
                
                long double x87_r0
                sub_50d360(ebx_3, x87_r0)
                sub_50d530(ebx_3)
                
                if (*(ebx_3 + 0xba) != 0)
                    *(ebx_3 + 0xba) = 0
                    sub_50ee10(ebx_3)
    
    int32_t* eax_26 = sub_4079d0(&ebx_3[0x39], &ebx_3[0x33], &var_2c, &ebx_3[0x39])
    int32_t var_8_1 = 0
    void* esi_6 = *(eax_13 + 0x44)
    sub_555e00(esi_6, 0x13, 1)
    sub_55d4d0(*(esi_6 + 0x80), eax_26)
    int32_t var_8_2 = 0xffffffff
    
    if (result_2 u>= 0x10)
        sub_403160(var_2c, result_2 + 1, 1)
    
    sub_50d600(ebx_3)
    int32_t eax_30 = eax_14[0x46]
    int32_t eax_32 = var_54->__offset(0x118).d
    int32_t eax_33 = sub_50fa90(ebx_3)
    int32_t eax_34 = sub_50fa30(var_50)
    void* esi_7 = *(eax_13 + 0x44)
    sub_555e00(esi_7, 0x13, 1)
    int32_t* eax_37 = sub_4079d0(sub_55f2e0(*(esi_7 + 0x80), eax_32, eax_30, eax_34, eax_33), 
        &arg1[0x33], &var_2c, var_68_1)
    int32_t var_8_3 = 1
    int32_t* ebx_5 = var_50
    sub_508ce0(&ebx_5[0x45], eax_37)
    int32_t var_8_4 = 0xffffffff
    
    if (result_2 u>= 0x10)
        sub_403160(var_2c, result_2 + 1, 1)
    
    ebx_5[0x69] = eax_14[0x46]
    int32_t eax_43 = var_54->__offset(0x118).d
    ebx_5[0x6a] = eax_43
    result = sub_4090e0(sub_4079d0(eax_43, &arg1[0x33], &var_2c, var_68_1), &ebx_5[0x3f])
    char var_45_2 = result.b
    
    if (result_2 u>= 0x10)
        sub_403160(var_2c, result_2 + 1, 1)
        result.b = var_45_2
    
    if (result.b != 0)
        int32_t var_80_25 = 0
        var_50 = &partsengine::SChangedEventArgs::`vftable'{for `partsengine::IEventArgs'}
        void* var_44
        sub_409670(&ebx_5[0x3f], 
            sub_4079d0(sub_4cbd50(&ebx_5[3], &var_50, var_80_25), &arg1[0x33], &var_44, var_68_1))
        int32_t result_1
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_44, result + 1, 1)
else
    result = sub_4090e0(sub_4079d0(eax_4, &arg1[0x33], ecx, &arg1[0x39]), &arg1[0x3f])
    char var_45 = result.b
    
    if (result_2 u>= 0x10)
        sub_403160(var_2c, result_2 + 1, 1)
        result.b = var_45
    
    if (result.b != 0)
        int32_t var_80_2 = 0
        var_54 = &partsengine::SChangedEventArgs::`vftable'{for `partsengine::IEventArgs'}
        sub_409670(&arg1[0x3f], 
            sub_4079d0(sub_4cbd50(&arg1[3], &var_54, var_80_2), &arg1[0x33], &var_2c, &arg1[0x39]))
        result = result_2
        
        if (result u>= 0x10)
            result = sub_403160(var_2c, result + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
