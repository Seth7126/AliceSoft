// 函数: sub_5255a0
// 地址: 0x5255a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb64
float var_24 = 0f
float result_1 = 0f
float result = sub_47d5a0(esi)

if (result.b != 0)
    result = (***(esi + 0xc))(&var_24, &result_1)
    
    if (result.b == 1)
        struct partsengine::IEventArgs::partsengine::SMouseEnterEventArgs::VTable* const var_20
        
        if (arg1[0x6b].b == 0)
            long double x87_r0
            long double x87_r1
            float eax_2 = sub_63cd60(var_24, x87_r0, x87_r1)
            long double x87_r2
            float var_18_1 = sub_63cd60(result_1, x87_r1, x87_r2)
            var_20 = &partsengine::SMouseEnterEventArgs::`vftable'{for `partsengine::IEventArgs'}
            float var_1c_1 = eax_2
            sub_4cbd50(&arg1[0x79], &var_20, 0)
            void* ecx_5 = *(*arg1 + 0x44)
            
            if (*(ecx_5 + 0x4c) != 0)
                int32_t* ecx_6 = *(ecx_5 + 0x74)
                
                if (ecx_6 != 0)
                    (*(*ecx_6 + 8))()
            
            arg1[0x6c] = 0
        
        int32_t var_38_2
        
        if (arg1[1].b == 0)
            var_38_2 = 2
        else
            var_38_2 = 3
        
        (*(**arg1 + 0x2c))(var_38_2)
        float eax_7 = sub_63cd60(var_24)
        float var_c_1 = sub_63cd60(result_1)
        int32_t var_8_1 = arg1[0x6c]
        struct partsengine::IEventArgs::partsengine::SMouseOnCursorEventArgs::VTable* const 
            var_14 = &partsengine::SMouseOnCursorEventArgs::`vftable'{for `partsengine::IEventArgs'}
        float var_10_1 = eax_7
        sub_4cbd50(&arg1[0x79], &var_14, 0)
        float ecx_11 = var_24
        
        if (arg1[0x6e] == ecx_11)
            result = result_1
        
        if (arg1[0x6e] != ecx_11 || arg1[0x6f] != result)
            float eax_10 = sub_63cd60(ecx_11)
            float var_18_2 = sub_63cd60(result_1)
            var_20 = &partsengine::SMouseMoveEventArgs::`vftable'{for `partsengine::IEventArgs'}
            float var_1c_2 = eax_10
            sub_4cbd50(&arg1[0x79], &var_20, 0)
            ecx_11 = var_24
            result = result_1
        
        arg1[0x6e] = ecx_11
        arg1[0x6f] = result

arg1[0x6b].b = 1
return result
