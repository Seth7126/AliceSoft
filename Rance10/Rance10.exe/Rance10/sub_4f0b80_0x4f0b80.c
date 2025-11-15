// 函数: sub_4f0b80
// 地址: 0x4f0b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735f80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x74)

if (ecx != 0)
    ecx = (*(*ecx + 4))(eax_2)
    *(arg1 + 0x74) = 0

int32_t var_b0 = arg5
int32_t* var_b8 = ecx
long double x87_r0
char* result = sub_506700(arg1 + 0x84, x87_r0, var_b8, arg4)

if (result.b == 0)
    result.b = 0
else
    int32_t eax_4 = *(arg1 + 0x11c)
    
    if (eax_4 != 0)
        void* ecx_2 = *(arg1 + 0x78)
        int32_t var_84 = eax_4
        
        if (eax_4 s> 0)
            void* var_98
            sub_42ebc0(ecx_2 + 0x14, &var_98, &var_84)
            void* eax_5 = var_98
            *(eax_5 + 0x14) += 1
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x765340, 0xa)
    int32_t var_8_1 = 0
    int32_t* edx_1 = *(arg4 + 4)
    int32_t* eax_6
    
    if (edx_1 != 0)
        char* ecx_5 = &var_44
        
        if (var_30_1 u>= 0x10)
            ecx_5 = var_44.d
        
        eax_6 = (*(*edx_1 + 0x24))(ecx_5)
    else
        eax_6 = nullptr
    
    struct common::CEXTreeReader::VTable* const var_7c = &common::CEXTreeReader::`vftable'
    var_8_1.b = 2
    
    if (var_30_1 u>= 0x10)
        var_b8 = var_44.d
        sub_403160(var_b8, var_30_1 + 1, 1)
    
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    int32_t*** ecx_10
    char* esi_1
    char var_2c
    int32_t*** var_18
    
    if (arg3 s> 3)
        int32_t* var_74
        sub_403360(&var_74, 0x75d153)
        var_8_1.b = 4
        sub_403360(&var_2c, 0x7653a4)
        var_8_1.b = 5
        char var_5c[0x10]
        var_b8 = &var_5c
        char* eax_11 = sub_403cd0(&var_7c, var_b8, &var_2c, &var_74)
        var_8_1.b = 6
        int32_t var_b0_4 = arg5
        int32_t** var_90
        int32_t var_8c
        int32_t eax_14
        int32_t edx_4
        edx_4:eax_14 = muls.dp.d(0x2aaaaaab, 
            sub_4324c0(
                std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld(
                    &var_90), 
                var_8c, var_90, eax_11) - var_90)
        ecx_10 = &var_90
        int32_t edx_5 = edx_4 s>> 2
        esi_1 = (edx_5 u>> 0x1f) + edx_5
        sub_417070(ecx_10)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            var_b8 = var_5c[0].d
            ecx_10 = sub_403160(var_b8, var_48 + 1, 1)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c[0] = 0
        
        if (var_18 u>= 0x10)
            var_b8 = var_2c.d
            ecx_10 = sub_403160(var_b8, var_18 + 1, 1)
        
        var_8_1.b = 2
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        char* var_60
        
        if (var_60 u>= 0x10)
            var_b8 = var_74
            result, ecx_10 = sub_403160(var_b8, &var_60[1], 1)
    else
        sub_403360(&var_2c, 0x765350)
        var_8_1.b = 3
        char* ebx_1
        
        if (eax_6 != 0)
            char* ecx_8 = &var_2c
            
            if (var_18 u>= 0x10)
                ecx_8 = var_2c.d
            
            ebx_1 = (*(*eax_6 + 8))(ecx_8, 0)
        else
            ebx_1 = nullptr
        
        var_8_1.b = 2
        ecx_10 = var_18
        
        if (ecx_10 u>= 0x10)
            var_b8 = var_2c.d
            result, ecx_10 = sub_403160(var_b8, ecx_10 + 1, 1)
        
        esi_1 = &ebx_1[6]
        
        if (ebx_1 s< 0xa)
            esi_1 = ebx_1
    long double x87_r1
    
    if (esi_1 u> 0x10)
        result.b = 0
    else
        switch (esi_1)
            case nullptr
                sub_4eec50(arg1, nullptr, 1)
                void* ecx_20 = *(arg1 + 0x74)
                struct common::CEXTreeReader::VTable* const* var_b0_5 = &var_7c
                *(ecx_20 + 0x20) = 1
                result = sub_4e0c20(ecx_20 + 0xa4, x87_r1, ecx_20)
            label_4f1040:
                
                if (result.b == 0)
                    result.b = 0
                else
                    sub_4ef0b0(arg1)
                    result.b = 1
            case 1
                sub_4eec50(arg1, 1, 1)
                void* ecx_23 = *(arg1 + 0x74)
                struct common::CEXTreeReader::VTable* const* var_b0_6 = &var_7c
                *(ecx_23 + 0x20) = 1
                result = sub_4e51c0(ecx_23 + 0xe4, x87_r1, ecx_23)
            label_4f0e37:
                
                if (result.b != 0)
                    sub_4ef0b0(arg1)
                    result.b = 1
                else
                    result.b = 0
            case 2
                int32_t var_b0_7 = arg5
                result = sub_522b80(sub_4ef140(arg1), var_b8, &var_7c)
                goto label_4f0e37
            case 3
                int32_t var_b0_8 = arg5
                result = sub_522b80(sub_4ef220(arg1), var_b8, &var_7c)
                goto label_4f0e37
            case 4
                int32_t ecx_33 = sub_4eec50(arg1, 4, 1)
                struct common::CEXTreeReader::VTable* const* var_b0_9 = &var_7c
                result = sub_520830(*(arg1 + 0x74), ecx_33)
                goto label_4f0e37
            case 5
                struct common::CEXTreeReader::VTable* const* var_b0_10 = &var_7c
                result = sub_502e30(sub_4ef320(arg1), ecx_10)
                goto label_4f0e37
            case 6
                struct common::CEXTreeReader::VTable* const* var_b0_11 = &var_7c
                result = sub_4ed170(sub_4ef400(arg1), ecx_10)
                goto label_4f0e37
            case 7
                struct common::CEXTreeReader::VTable* const* var_b0_12 = &var_7c
                result = sub_5100b0(sub_4ef4e0(arg1), ecx_10)
                goto label_4f0e37
            case 8
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUILayoutBoxView::VTable
                    ** eax_25 = sub_4ef5c0(arg1)
                struct common::CEXTreeReader::VTable* const* var_b0_13 = &var_7c
                eax_25[8].b = 1
                result = sub_4fdb50(&eax_25[0x10], x87_r1, arg3, arg3)
                goto label_4f0e37
            case 9
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIRadioButtonBoxView::VTable
                    ** eax_26
                void* ecx_45
                eax_26, ecx_45 = sub_4ef6a0(arg1)
                int32_t var_b0_14 = arg5
                eax_26[8].b = 1
                
                if (sub_51a3d0(&eax_26[0x10], ecx_45, &var_7c).b == 0)
                    result.b = 0
                else
                    sub_51a9d0(eax_26)
                    sub_4ef0b0(arg1)
                    result.b = 1
            case 0xa
                struct common::CEXTreeReader::VTable* const* var_b0_15 = &var_7c
                result = sub_4c25d0(sub_4ef780(arg1), ecx_10)
                goto label_4f0e37
            case 0xb
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUISpinBoxView::VTable
                    ** eax_28
                void* ecx_52
                eax_28, ecx_52 = sub_4ef860(arg1)
                struct common::CEXTreeReader::VTable* const* var_b0_16 = &var_7c
                eax_28[8].b = 1
                
                if (sub_4b6540(&eax_28[0x2c], x87_r1, ecx_52).b == 0)
                    result.b = 0
                else
                    eax_28[0x2b] = eax_28[0x3d]
                    sub_4ef0b0(arg1)
                    result.b = 1
            case 0xc
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable
                    ** eax_30 = sub_4ef940(arg1)
                struct common::CEXTreeReader::VTable* const* var_b0_17 = &var_7c
                eax_30[8].b = 1
                result = sub_4b4290(&eax_30[0x29], &var_7c)
                goto label_4f0e37
            case 0xd
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormView::VTable
                    ** eax_31 = sub_4efa20(arg1)
                struct common::CEXTreeReader::VTable* const* var_b0_18 = &var_7c
                eax_31[8].b = 1
                result = sub_4aeed0(&eax_31[0x39], &var_7c)
                goto label_4f0e37
            case 0xe
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIFormGroupView::VTable
                    ** eax_32 = sub_4efb00(arg1)
                struct common::CEXTreeReader::VTable* const* var_b0_19 = &var_7c
                eax_32[8].b = 1
                result = sub_4ac080(&eax_32[0x28], &var_7c)
                goto label_4f0e37
            case 0xf
                struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIUserComponentView::VTable
                    ** eax_33 = sub_4efbe0(arg1)
                struct common::CEXTreeReader::VTable* const* var_b0_20 = &var_7c
                eax_33[8].b = 1
                result = sub_4b9080(&eax_33[0x10], var_b8)
                goto label_4f0e37
            case 0x10
                struct common::CEXTreeReader::VTable* const* var_b0_21 = &var_7c
                result = sub_556b30(*(sub_4efcc0(arg1) + 0x44), arg2, arg3)
                goto label_4f1040

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
