// 函数: sub_4ba130
// 地址: 0x4ba130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732848
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s>= 0)
    int32_t* ecx = *(arg4 + 4)
    
    if (ecx != 0)
        result = (*(*ecx + 8))(eax_2)
    else
        result = nullptr
    
    if (result s<= arg3)
        result.b = 0
    else
        void** var_2c
        sub_403360(&var_2c, "PosX")
        int32_t var_8_1 = 0
        int32_t* ecx_2 = *(arg4 + 4)
        int32_t var_18
        int32_t edx_1
        
        if (ecx_2 != 0)
            void** edx_2 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_2 = var_2c
            
            edx_1 = (*(*ecx_2 + 0x24))(edx_2)
        else
            edx_1 = 0xffffffff
        
        int32_t* ecx_3 = *(arg4 + 4)
        float xmm0_1 = *arg1
        
        if (ecx_3 != 0)
            int32_t* var_5c_2 = ecx_3
            (*(*ecx_3 + 0x14))(arg3, edx_1, xmm0_1)
            xmm0_1 = fconvert.s(arg2)
        
        int32_t var_8_2 = 0xffffffff
        *arg1 = xmm0_1
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "PosY")
        int32_t var_8_3 = 1
        int32_t* ecx_5 = *(arg4 + 4)
        int32_t edx_3
        
        if (ecx_5 != 0)
            void** edx_4 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_4 = var_2c
            
            edx_3 = (*(*ecx_5 + 0x24))(edx_4)
        else
            edx_3 = 0xffffffff
        
        int32_t* ecx_6 = *(arg4 + 4)
        float xmm0_2 = arg1[1]
        
        if (ecx_6 != 0)
            int32_t* var_5c_5 = ecx_6
            (*(*ecx_6 + 0x14))(arg3, edx_3, xmm0_2)
            float var_48_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
            unimplemented  {fstp dword [ebp-0x44], st0}
            xmm0_2 = var_48_2
        
        int32_t var_8_4 = 0xffffffff
        arg1[1] = xmm0_2
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "ScaleX")
        int32_t var_8_5 = 2
        int32_t* ecx_8 = *(arg4 + 4)
        int32_t edx_5
        
        if (ecx_8 != 0)
            void** edx_6 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_6 = var_2c
            
            edx_5 = (*(*ecx_8 + 0x24))(edx_6)
        else
            edx_5 = 0xffffffff
        
        int32_t* ecx_9 = *(arg4 + 4)
        float xmm0_3 = arg1[2]
        
        if (ecx_9 != 0)
            int32_t* var_5c_8 = ecx_9
            (*(*ecx_9 + 0x14))(arg3, edx_5, xmm0_3)
            float var_48_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
            unimplemented  {fstp dword [ebp-0x44], st0}
            xmm0_3 = var_48_3
        
        int32_t var_8_6 = 0xffffffff
        arg1[2] = xmm0_3
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "ScaleY")
        int32_t var_8_7 = 3
        int32_t* ecx_11 = *(arg4 + 4)
        int32_t edx_7
        
        if (ecx_11 != 0)
            void** edx_8 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_8 = var_2c
            
            edx_7 = (*(*ecx_11 + 0x24))(edx_8)
        else
            edx_7 = 0xffffffff
        
        int32_t* ecx_12 = *(arg4 + 4)
        float xmm0_4 = arg1[3]
        
        if (ecx_12 != 0)
            int32_t* var_5c_11 = ecx_12
            (*(*ecx_12 + 0x14))(arg3, edx_7, xmm0_4)
            float var_48_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
            unimplemented  {fstp dword [ebp-0x44], st0}
            xmm0_4 = var_48_4
        
        int32_t var_8_8 = 0xffffffff
        arg1[3] = xmm0_4
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AngleX")
        int32_t var_8_9 = 4
        int32_t* ecx_14 = *(arg4 + 4)
        int32_t edx_9
        
        if (ecx_14 != 0)
            void** edx_10 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_10 = var_2c
            
            edx_9 = (*(*ecx_14 + 0x24))(edx_10)
        else
            edx_9 = 0xffffffff
        
        int32_t* ecx_15 = *(arg4 + 4)
        float xmm0_5 = arg1[4]
        
        if (ecx_15 != 0)
            int32_t* var_5c_14 = ecx_15
            (*(*ecx_15 + 0x14))(arg3, edx_9, xmm0_5)
            float var_48_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
            unimplemented  {fstp dword [ebp-0x44], st0}
            xmm0_5 = var_48_5
        
        int32_t var_8_10 = 0xffffffff
        arg1[4] = xmm0_5
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AngleY")
        int32_t var_8_11 = 5
        int32_t* ecx_17 = *(arg4 + 4)
        int32_t edx_11
        
        if (ecx_17 != 0)
            void** edx_12 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_12 = var_2c
            
            edx_11 = (*(*ecx_17 + 0x24))(edx_12)
        else
            edx_11 = 0xffffffff
        
        int32_t* ecx_18 = *(arg4 + 4)
        float xmm0_6 = arg1[5]
        
        if (ecx_18 != 0)
            int32_t* var_5c_17 = ecx_18
            (*(*ecx_18 + 0x14))(arg3, edx_11, xmm0_6)
            float var_48_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
            unimplemented  {fstp dword [ebp-0x44], st0}
            xmm0_6 = var_48_6
        
        int32_t var_8_12 = 0xffffffff
        arg1[5] = xmm0_6
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AngleZ")
        int32_t var_8_13 = 6
        int32_t* ecx_20 = *(arg4 + 4)
        int32_t edx_13
        
        if (ecx_20 != 0)
            void** edx_14 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_14 = var_2c
            
            edx_13 = (*(*ecx_20 + 0x24))(edx_14)
        else
            edx_13 = 0xffffffff
        
        int32_t* ecx_21 = *(arg4 + 4)
        float xmm0_7 = arg1[6]
        
        if (ecx_21 != 0)
            int32_t* var_5c_20 = ecx_21
            (*(*ecx_21 + 0x14))(arg3, edx_13, xmm0_7)
            float var_48_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
            unimplemented  {fstp dword [ebp-0x44], st0}
            xmm0_7 = var_48_7
        
        int32_t var_8_14 = 0xffffffff
        arg1[6] = xmm0_7
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AreaX")
        int32_t var_8_15 = 7
        int32_t* ecx_23 = *(arg4 + 4)
        int32_t var_48_8
        
        if (ecx_23 != 0)
            void** edx_15 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_15 = var_2c
            
            var_48_8 = (*(*ecx_23 + 0x24))(edx_15)
        else
            var_48_8 = 0xffffffff
        
        int32_t* ecx_24 = *(arg4 + 4)
        int32_t edx_16 = arg1[7]
        
        if (ecx_24 != 0)
            edx_16 = (*(*ecx_24 + 0x10))(arg3, var_48_8, edx_16)
        
        int32_t var_8_16 = 0xffffffff
        arg1[7] = edx_16
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AreaY")
        int32_t var_8_17 = 8
        int32_t* ecx_26 = *(arg4 + 4)
        int32_t var_48_9
        
        if (ecx_26 != 0)
            void** edx_17 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_17 = var_2c
            
            var_48_9 = (*(*ecx_26 + 0x24))(edx_17)
        else
            var_48_9 = 0xffffffff
        
        int32_t* ecx_27 = *(arg4 + 4)
        int32_t edx_18 = arg1[8]
        
        if (ecx_27 != 0)
            edx_18 = (*(*ecx_27 + 0x10))(arg3, var_48_9, edx_18)
        
        int32_t var_8_18 = 0xffffffff
        arg1[8] = edx_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AreaWidth")
        int32_t var_8_19 = 9
        int32_t* ecx_29 = *(arg4 + 4)
        int32_t var_48_10
        
        if (ecx_29 != 0)
            void** edx_19 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_19 = var_2c
            
            var_48_10 = (*(*ecx_29 + 0x24))(edx_19)
        else
            var_48_10 = 0xffffffff
        
        int32_t* ecx_30 = *(arg4 + 4)
        int32_t edx_20 = arg1[9]
        
        if (ecx_30 != 0)
            edx_20 = (*(*ecx_30 + 0x10))(arg3, var_48_10, edx_20)
        
        int32_t var_8_20 = 0xffffffff
        arg1[9] = edx_20
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AreaHeight")
        int32_t var_8_21 = 0xa
        int32_t* ecx_32 = *(arg4 + 4)
        int32_t var_48_11
        
        if (ecx_32 != 0)
            void** edx_21 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_21 = var_2c
            
            var_48_11 = (*(*ecx_32 + 0x24))(edx_21)
        else
            var_48_11 = 0xffffffff
        
        int32_t* ecx_33 = *(arg4 + 4)
        int32_t edx_22 = arg1[0xa]
        
        if (ecx_33 != 0)
            edx_22 = (*(*ecx_33 + 0x10))(arg3, var_48_11, edx_22)
        
        int32_t var_8_22 = 0xffffffff
        arg1[0xa] = edx_22
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "OriginX")
        int32_t var_8_23 = 0xb
        int32_t* ecx_35 = *(arg4 + 4)
        int32_t var_48_12
        
        if (ecx_35 != 0)
            void** edx_23 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_23 = var_2c
            
            var_48_12 = (*(*ecx_35 + 0x24))(edx_23)
        else
            var_48_12 = 0xffffffff
        
        int32_t* ecx_36 = *(arg4 + 4)
        int32_t edx_24 = arg1[0xb]
        
        if (ecx_36 != 0)
            edx_24 = (*(*ecx_36 + 0x10))(arg3, var_48_12, edx_24)
        
        int32_t var_8_24 = 0xffffffff
        arg1[0xb] = edx_24
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "OriginY")
        int32_t var_8_25 = 0xc
        int32_t* ecx_38 = *(arg4 + 4)
        int32_t var_48_13
        
        if (ecx_38 != 0)
            void** edx_25 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_25 = var_2c
            
            var_48_13 = (*(*ecx_38 + 0x24))(edx_25)
        else
            var_48_13 = 0xffffffff
        
        int32_t* ecx_39 = *(arg4 + 4)
        int32_t edx_26 = arg1[0xc]
        
        if (ecx_39 != 0)
            edx_26 = (*(*ecx_39 + 0x10))(arg3, var_48_13, edx_26)
        
        int32_t var_8_26 = 0xffffffff
        arg1[0xc] = edx_26
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "OriginType")
        int32_t var_8_27 = 0xd
        int32_t* ecx_41 = *(arg4 + 4)
        int32_t var_48_14
        
        if (ecx_41 != 0)
            void** edx_27 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_27 = var_2c
            
            var_48_14 = (*(*ecx_41 + 0x24))(edx_27)
        else
            var_48_14 = 0xffffffff
        
        int32_t* ecx_42 = *(arg4 + 4)
        int32_t edx_28 = arg1[0xd]
        
        if (ecx_42 != 0)
            edx_28 = (*(*ecx_42 + 0x10))(arg3, var_48_14, edx_28)
        
        int32_t var_8_28 = 0xffffffff
        arg1[0xd] = edx_28
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "ReverseTB")
        int32_t var_8_29 = 0xe
        int32_t* ecx_44 = *(arg4 + 4)
        int32_t var_48_15
        
        if (ecx_44 != 0)
            void** edx_29 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_29 = var_2c
            
            var_48_15 = (*(*ecx_44 + 0x24))(edx_29)
        else
            var_48_15 = 0xffffffff
        
        int32_t* ecx_45 = *(arg4 + 4)
        int32_t edx_30 = arg1[0xe]
        
        if (ecx_45 != 0)
            edx_30 = (*(*ecx_45 + 0x10))(arg3, var_48_15, edx_30)
        
        int32_t var_8_30 = 0xffffffff
        arg1[0xe] = edx_30
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "ReverseLR")
        int32_t var_8_31 = 0xf
        int32_t* ecx_47 = *(arg4 + 4)
        int32_t var_48_16
        
        if (ecx_47 != 0)
            void** edx_31 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_31 = var_2c
            
            var_48_16 = (*(*ecx_47 + 0x24))(edx_31)
        else
            var_48_16 = 0xffffffff
        
        int32_t* ecx_48 = *(arg4 + 4)
        int32_t edx_32 = arg1[0xf]
        
        if (ecx_48 != 0)
            edx_32 = (*(*ecx_48 + 0x10))(arg3, var_48_16, edx_32)
        
        int32_t var_8_32 = 0xffffffff
        arg1[0xf] = edx_32
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "MulColorR")
        int32_t var_8_33 = 0x10
        int32_t* ecx_50 = *(arg4 + 4)
        int32_t var_48_17
        
        if (ecx_50 != 0)
            void** edx_33 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_33 = var_2c
            
            var_48_17 = (*(*ecx_50 + 0x24))(edx_33)
        else
            var_48_17 = 0xffffffff
        
        int32_t* ecx_51 = *(arg4 + 4)
        int32_t edx_34 = arg1[0x10]
        
        if (ecx_51 != 0)
            edx_34 = (*(*ecx_51 + 0x10))(arg3, var_48_17, edx_34)
        
        int32_t var_8_34 = 0xffffffff
        arg1[0x10] = edx_34
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "MulColorG")
        int32_t var_8_35 = 0x11
        int32_t* ecx_53 = *(arg4 + 4)
        int32_t var_48_18
        
        if (ecx_53 != 0)
            void** edx_35 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_35 = var_2c
            
            var_48_18 = (*(*ecx_53 + 0x24))(edx_35)
        else
            var_48_18 = 0xffffffff
        
        int32_t* ecx_54 = *(arg4 + 4)
        int32_t edx_36 = arg1[0x11]
        
        if (ecx_54 != 0)
            edx_36 = (*(*ecx_54 + 0x10))(arg3, var_48_18, edx_36)
        
        int32_t var_8_36 = 0xffffffff
        arg1[0x11] = edx_36
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "MulColorB")
        int32_t var_8_37 = 0x12
        int32_t* ecx_56 = *(arg4 + 4)
        int32_t var_48_19
        
        if (ecx_56 != 0)
            void** edx_37 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_37 = var_2c
            
            var_48_19 = (*(*ecx_56 + 0x24))(edx_37)
        else
            var_48_19 = 0xffffffff
        
        int32_t* ecx_57 = *(arg4 + 4)
        int32_t edx_38 = arg1[0x12]
        
        if (ecx_57 != 0)
            edx_38 = (*(*ecx_57 + 0x10))(arg3, var_48_19, edx_38)
        
        int32_t var_8_38 = 0xffffffff
        arg1[0x12] = edx_38
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AddColorR")
        int32_t var_8_39 = 0x13
        int32_t* ecx_59 = *(arg4 + 4)
        int32_t var_48_20
        
        if (ecx_59 != 0)
            void** edx_39 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_39 = var_2c
            
            var_48_20 = (*(*ecx_59 + 0x24))(edx_39)
        else
            var_48_20 = 0xffffffff
        
        int32_t* ecx_60 = *(arg4 + 4)
        int32_t edx_40 = arg1[0x13]
        
        if (ecx_60 != 0)
            edx_40 = (*(*ecx_60 + 0x10))(arg3, var_48_20, edx_40)
        
        int32_t var_8_40 = 0xffffffff
        arg1[0x13] = edx_40
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AddColorG")
        int32_t var_8_41 = 0x14
        int32_t* ecx_62 = *(arg4 + 4)
        int32_t var_48_21
        
        if (ecx_62 != 0)
            void** edx_41 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_41 = var_2c
            
            var_48_21 = (*(*ecx_62 + 0x24))(edx_41)
        else
            var_48_21 = 0xffffffff
        
        int32_t* ecx_63 = *(arg4 + 4)
        int32_t edx_42 = arg1[0x14]
        
        if (ecx_63 != 0)
            edx_42 = (*(*ecx_63 + 0x10))(arg3, var_48_21, edx_42)
        
        int32_t var_8_42 = 0xffffffff
        arg1[0x14] = edx_42
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "AddColorB")
        int32_t var_8_43 = 0x15
        int32_t* ecx_65 = *(arg4 + 4)
        int32_t var_48_22
        
        if (ecx_65 != 0)
            void** edx_43 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_43 = var_2c
            
            var_48_22 = (*(*ecx_65 + 0x24))(edx_43)
        else
            var_48_22 = 0xffffffff
        
        int32_t* ecx_66 = *(arg4 + 4)
        int32_t edx_44 = arg1[0x15]
        
        if (ecx_66 != 0)
            edx_44 = (*(*ecx_66 + 0x10))(arg3, var_48_22, edx_44)
        
        int32_t var_8_44 = 0xffffffff
        arg1[0x15] = edx_44
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "DrawFilterType")
        int32_t var_8_45 = 0x16
        int32_t* ecx_68 = *(arg4 + 4)
        int32_t var_48_23
        
        if (ecx_68 != 0)
            void** edx_45 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_45 = var_2c
            
            var_48_23 = (*(*ecx_68 + 0x24))(edx_45)
        else
            var_48_23 = 0xffffffff
        
        int32_t* ecx_69 = *(arg4 + 4)
        int32_t edx_46 = arg1[0x16]
        
        if (ecx_69 != 0)
            edx_46 = (*(*ecx_69 + 0x10))(arg3, var_48_23, edx_46)
        
        int32_t var_8_46 = 0xffffffff
        arg1[0x16] = edx_46
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_403360(&var_2c, "TextureFilterType")
        int32_t var_8_47 = 0x17
        int32_t* ecx_71 = *(arg4 + 4)
        int32_t var_48_24
        
        if (ecx_71 != 0)
            void** edx_47 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_47 = var_2c
            
            var_48_24 = (*(*ecx_71 + 0x24))(edx_47)
        else
            var_48_24 = 0xffffffff
        
        int32_t* ecx_72 = *(arg4 + 4)
        int32_t edx_48 = arg1[0x17]
        
        if (ecx_72 != 0)
            edx_48 = (*(*ecx_72 + 0x10))(arg3, var_48_24, edx_48)
        
        int32_t var_8_48 = 0xffffffff
        arg1[0x17] = edx_48
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        void** var_44
        sub_403360(&var_44, "Alpha")
        int32_t var_8_49 = 0x18
        int32_t* ecx_74 = *(arg4 + 4)
        int32_t var_48_25
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (ecx_74 != 0)
            void** edx_49 = &var_44
            
            if (var_30 u>= 0x10)
                edx_49 = var_44
            
            var_48_25 = (*(*ecx_74 + 0x24))(edx_49)
        else
            var_48_25 = 0xffffffff
        
        int32_t* edx_50 = *(arg4 + 4)
        int32_t ecx_75 = arg1[0x18]
        
        if (edx_50 != 0)
            ecx_75 = (*(*edx_50 + 0x10))(arg3, var_48_25, ecx_75)
        
        arg1[0x18] = ecx_75
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
