// 函数: sub_4fc850
// 地址: 0x4fc850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736b18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1->__offset(0x208).b != 0)
    sub_4fb500(arg1)
    int32_t* var_54 = nullptr
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_8_1 = 0
    sub_4fbb10(arg1, &var_54, arg3)
    int32_t i = arg1->__offset(0x1e4).d
    int32_t esi_1 = arg1->__offset(0x8).d
    int32_t* ecx_1 = var_54
    
    if (i != esi_1)
        int32_t* edx_1 = ecx_1
        
        if (ecx_1 != var_50_1)
            while (*edx_1 != i)
                edx_1 = &edx_1[1]
                
                if (edx_1 == var_50_1)
                    goto label_4fc8e1
        
        if (ecx_1 == var_50_1 || edx_1 == var_50_1)
        label_4fc8e1:
            arg1->__offset(0x1e4).d = esi_1
    
    int32_t i_1 = arg1->__offset(0x1f4).d
    
    if (i_1 != esi_1)
        int32_t* edx_2 = ecx_1
        
        if (ecx_1 != var_50_1)
            while (*edx_2 != i_1)
                edx_2 = &edx_2[1]
                
                if (edx_2 == var_50_1)
                    goto label_4fc908
        
        if (ecx_1 == var_50_1 || edx_2 == var_50_1)
        label_4fc908:
            arg1->__offset(0x1f4).d = esi_1
    
    int32_t i_2 = arg1->__offset(0x1f8).d
    
    if (i_2 != esi_1)
        int32_t* edx_3 = ecx_1
        
        if (ecx_1 != var_50_1)
            while (*edx_3 != i_2)
                edx_3 = &edx_3[1]
                
                if (edx_3 == var_50_1)
                    goto label_4fc931
        
        if (ecx_1 == var_50_1 || edx_3 == var_50_1)
        label_4fc931:
            arg1->__offset(0x1f8).d = esi_1
    
    int32_t i_3 = arg1->__offset(0x1fc).d
    
    if (i_3 != esi_1)
        int32_t* edx_4 = ecx_1
        
        if (ecx_1 != var_50_1)
            while (*edx_4 != i_3)
                edx_4 = &edx_4[1]
                
                if (edx_4 == var_50_1)
                    goto label_4fc958
        
        if (ecx_1 == var_50_1 || edx_4 == var_50_1)
        label_4fc958:
            arg1->__offset(0x1fc).d = esi_1
    
    int32_t i_4 = arg1->__offset(0x200).d
    
    if (i_4 != esi_1)
        if (ecx_1 == var_50_1)
        label_4fc981:
            arg1->__offset(0x200).d = esi_1
        else
            while (*ecx_1 != i_4)
                ecx_1 = &ecx_1[1]
                
                if (ecx_1 == var_50_1)
                    goto label_4fc981_1
            
            if (ecx_1 == var_50_1)
            label_4fc981_1:
                arg1->__offset(0x200).d = esi_1
    
    sub_4fbbe0(&var_54, arg2)
    void* eax_4 = arg1->__offset(0x244).d
    void* ecx_2 = eax_4 + arg2
    
    if (ecx_2 s< eax_4)
        ecx_2 = 0x1f5
    
    *(arg1 + 0x244) = ecx_2
    sub_4fc590(arg1, arg2)
    void* esi_2 = data_7fcb64
    arg1->__offset(0xc).d = 0
    float var_1c = 0f
    float var_20 = 0f
    char eax_5 = sub_47d5a0(esi_2)
    
    if (eax_5 != 0)
        eax_5 = (***(esi_2 + 0xc))(&var_1c, &var_20)
    
    arg3:3.b = eax_5
    float eax_8
    float ecx_6
    
    if (eax_5 == 1)
        ecx_6 = var_1c
        eax_8 = var_20
    else
        ecx_6 = arg1->__offset(0x10).d
        eax_8 = arg1->__offset(0x14).d
        var_1c = ecx_6
        var_20 = eax_8
    
    char var_34_1
    
    if (ecx_6 == arg1->__offset(0x10).d)
        var_34_1 = ecx_6.b - (arg1->__offset(0x10).d).b
        arg1->__offset(0x14).d
    
    if (ecx_6 != arg1->__offset(0x10).d || eax_8 != arg1->__offset(0x14).d)
        var_34_1 = 1
    
    void* ebx_2 = data_7fcb64
    
    if (sub_47d5a0(ebx_2) != 0)
        if ((***(ebx_2 + 0x1c))(eax_2) != 0)
            ebx_2.w = GetKeyState(1)
            ebx_2.w u>>= 0xf
            ebx_2.b &= 1
        else
            ebx_2.b = 0
    else
        ebx_2.b = 0
    
    void* eax_15 = data_7fcb64
    char var_38_1 = ebx_2.b
    int16_t eax_16 = sub_47d5a0(eax_15)
    
    if (eax_16.b != 0)
        eax_16 = (***(eax_15 + 0x1c))(eax_2)
        
        if (eax_16.b != 0)
            eax_16 = GetKeyState(2) u>> 0xf & 0xff01
    
    char var_16_1 = eax_16.b
    char var_3c_1 = eax_16.b
    void* eax_19 = data_7fcb64
    int16_t eax_20
    int16_t edx_6
    eax_20, edx_6 = sub_47d5a0(eax_19)
    
    if (eax_20.b != 0)
        eax_20, edx_6 = (***(eax_19 + 0x1c))(eax_2)
        
        if (eax_20.b != 0)
            eax_20, edx_6 = GetKeyState(4)
            eax_20 = eax_20 u>> 0xf & 0xff01
    
    edx_6.b = arg1->__offset(0x38).b
    char var_18_1 = eax_20.b
    char var_40_1 = eax_20.b
    char var_2c_1
    
    if (edx_6.b == 0)
        var_2c_1 = 1
    
    if (edx_6.b != 0 || ebx_2.b == 0)
        var_2c_1 = 0
    
    edx_6:1.b = arg1->__offset(0x39).b
    char var_24_1
    
    if (edx_6:1.b == 0)
        var_24_1 = 1
    
    if (edx_6:1.b != 0 || var_16_1 == 0)
        var_24_1 = 0
    
    char ecx_14 = arg1->__offset(0x3a).b
    bool cond:1_1 = ecx_14 != 0
    char var_28_1
    
    if (not(cond:1_1))
        var_28_1 = 1
    
    if (cond:1_1 || eax_20.b == 0)
        var_28_1 = 0
    
    char var_11_1
    
    if (edx_6.b != 0)
        var_11_1 = 1
    
    if (edx_6.b == 0 || ebx_2.b != 0)
        var_11_1 = 0
    
    char var_13_1
    
    if (edx_6:1.b != 0)
        var_13_1 = 1
    
    if (edx_6:1.b == 0 || var_16_1 != 0)
        var_13_1 = 0
    
    char var_12_2
    
    if (ecx_14 != 0)
        var_12_2 = 1
    
    if (ecx_14 == 0 || eax_20.b != 0)
        var_12_2 = 0
    
    void* esi_3 = data_7fcb64
    arg1->__offset(0x39).b = var_16_1
    arg1->__offset(0x38).b = ebx_2.b
    arg1->__offset(0x3a).b = eax_20.b
    char eax_23 = sub_47d5a0(esi_3)
    int32_t* ecx_18
    
    if (eax_23 != 0)
        ecx_18 = *(esi_3 + 0x10)
    
    struct partsengine::IEventArgs::partsengine::SMouseWheelEventArgs::VTable* const var_60
    int32_t var_48_3
    int32_t var_44_1
    
    if (eax_23 == 0 || ecx_18 == 0)
        var_44_1 = 0
        var_48_3 = 0
    else
        var_44_1 = (*(*ecx_18 + 4))(eax_2)
        int32_t eax_26 = (*(**(esi_3 + 0x10) + 8))()
        var_48_3 = eax_26
        
        if (var_44_1 != 0 || eax_26 != 0)
            int32_t var_58_1 = eax_26
            int32_t var_5c_1 = var_44_1
            var_60 = &partsengine::SMouseWheelEventArgs::`vftable'{for `partsengine::IEventArgs'}
            sub_4cbd50(arg1 + 0x20c, &var_60, 0)
    
    if (arg3:3.b == 1)
        if (var_34_1 != 0)
            long double x87_r0
            long double x87_r1
            float eax_27 = sub_63cd60(var_1c, x87_r0, x87_r1)
            long double x87_r2
            float var_58_2 = sub_63cd60(var_20, x87_r1, x87_r2)
            var_60 = &partsengine::SMouseMoveEventArgs::`vftable'{for `partsengine::IEventArgs'}
            float var_5c_2 = eax_27
            sub_4cbd50(arg1 + 0x20c, &var_60, 0)
        
        struct partsengine::IEventArgs::partsengine::SMouseClickEventArgs::VTable* const var_64
        
        if (var_11_1 != 0)
            float eax_29 = sub_63cd60(var_1c, eax_2)
            float var_5c_3 = sub_63cd60(var_20)
            var_64 = &partsengine::SMouseClickEventArgs::`vftable'{for `partsengine::IEventArgs'}
            var_60 = eax_29
            int32_t var_58_3 = 1
            sub_4cbd50(arg1 + 0x20c, &var_64, 0)
            float eax_31 = sub_63cd60(var_20)
            sub_4b99c0(&arg1[0x18], sub_63cd60(var_1c, eax_31))
        
        if (var_13_1 != 0)
            float eax_33 = sub_63cd60(var_1c, eax_2)
            float var_5c_4 = sub_63cd60(var_20)
            var_64 = &partsengine::SMouseClickEventArgs::`vftable'{for `partsengine::IEventArgs'}
            var_60 = eax_33
            int32_t var_58_4 = 2
            sub_4cbd50(arg1 + 0x20c, &var_64, 0)
        
        if (var_12_2 != 0)
            float eax_35 = sub_63cd60(var_1c, eax_2)
            float var_5c_5 = sub_63cd60(var_20)
            var_64 = &partsengine::SMouseClickEventArgs::`vftable'{for `partsengine::IEventArgs'}
            var_60 = eax_35
            int32_t var_58_5 = 4
            sub_4cbd50(arg1 + 0x20c, &var_64, 0)
    
    int32_t* eax_37 = var_54
    int32_t* var_30_1
    struct _EXCEPTION_REGISTRATION_RECORD** esi_8
    
    if (eax_37 == var_50_1)
    label_4fcce6:
        esi_8 = arg1->__offset(0x8).d
        var_30_1 = esi_8
    else
        while (true)
            int32_t* ecx_37 = *eax_37
            
            if (ecx_37[0x6d].b != 0)
                esi_8 = ecx_37
                var_30_1 = ecx_37
                break
            
            eax_37 = &eax_37[1]
            
            if (eax_37 == var_50_1)
                goto label_4fcce6
    
    eax_37.b = var_24_1
    
    if (eax_37.b != 0 || var_28_1 != eax_37.b)
        if (arg1->__offset(0x1e4).d != arg1->__offset(0x8).d)
            sub_4fb8d0(arg1, 0)
        
        eax_37.b = var_24_1
    
    if (var_2c_1 != 0 || eax_37.b != 0)
        if (arg1->__offset(0x1f4).d != arg1->__offset(0x8).d)
            sub_4fb9d0(arg1, 0)
        
        if (var_2c_1 != 0 || var_28_1 != 0)
            goto label_4fcd3f
    else if (var_28_1 != 0)
    label_4fcd3f:
        
        if (arg1->__offset(0x1f8).d != arg1->__offset(0x8).d)
            sub_4fba70(arg1, 0)
    
    if (arg3:3.b != 1)
        if (var_11_1 != 0 && arg1->__offset(0x1e4).d != arg1->__offset(0x8).d)
            sub_4fb8d0(arg1, 1)
        
        if (var_12_2 != 0 && arg1->__offset(0x1f4).d != arg1->__offset(0x8).d)
            sub_4fb9d0(arg1, 1)
        
        if (var_13_1 != 0 && arg1->__offset(0x1f8).d != arg1->__offset(0x8).d)
            sub_4fba70(arg1, 1)
    
    if (ebx_2.b == 0 && var_18_1 == ebx_2.b && var_16_1 == ebx_2.b)
        arg1->__offset(0x1f0).b = ebx_2.b
    
    char eax_43
    int32_t* ecx_45
    eax_43, ecx_45 = sub_4fbc50(arg1, &var_54, arg2, var_1c, var_20, var_38_1, var_34_1)
    
    if (eax_43 != 0 && *(arg1->__offset(0x200).d + 0x1b4) == 0)
        sub_526380(var_30_1)
        ecx_45 = sub_526340(arg1->__offset(0x200).d)
        esi_8 = arg1->__offset(0x200).d
    
    if (arg1->__offset(0x1f0).b == 0)
        void* eax_45 = arg1->__offset(0x200).d
        
        if (eax_45 == arg1->__offset(0x8).d || *(eax_45 + 0x1c0) == 0 || *(eax_45 + 0x1dc) s>= 0)
            if (arg3:3.b != 1)
                sub_525e10(arg1->__offset(0x1fc).d, arg1->__offset(0x1e4).d)
                ecx_45 = arg1->__offset(0x1e4).d
                
                if (ecx_45 == esi_8)
                    ecx_45 = sub_525710(ecx_45)
            else
                if (var_2c_1 == 0 && var_28_1 == 0)
                    arg2.b = 0
                
                if (var_2c_1 != 0 || var_28_1 != 0 || var_24_1 != 0)
                    arg2.b = 1
                
                struct _EXCEPTION_REGISTRATION_RECORD** eax_47
                eax_47, ecx_45 = sub_4fbd90(arg1, &var_54, var_1c, var_20, var_30_1, arg2.b, 
                    var_2c_1, var_2c_1, var_28_1, var_24_1, var_38_1, var_40_1, var_3c_1, var_34_1)
                esi_8 = eax_47
    
    int32_t* var_78_9 = ecx_45
    sub_4fc1c0(&var_54, var_1c, var_20, var_44_1, var_48_3, esi_8)
    sub_525e70(esi_8)
    
    if (var_30_1 != esi_8)
        sub_526100(var_30_1)
    
    if (arg3:3.b == 1 && arg1->__offset(0x3b).b != 0)
        arg1->__offset(0x10).d = var_1c
        arg1->__offset(0x14).d = var_20
    
    float eax_49
    eax_49.b = eax_5 == 1
    arg1->__offset(0x3b).b = eax_49.b
    result = sub_4fc540(arg1, &var_54)
    int32_t* ecx_53 = var_54
    
    if (ecx_53 != 0)
        result = sub_403160(ecx_53, (var_4c_1 - ecx_53) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
