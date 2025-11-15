// 函数: sub_5382f0
// 地址: 0x5382f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_esi = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_538338:
        
        if (vFunc_0 != 0)
            goto label_53833e
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_c_1 = arg1
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_538338
        
    label_53833e:
        result = sub_4ee010(vFunc_0)
        
        if (result != 0)
            void* edi_1 = result[0x91]
            
            if (edi_1 != 0)
                void* ecx_8 = *(edi_1 + 4)
                
                if (ecx_8 != 0)
                    vFunc_0, edi_1 = sub_4f01b0(ecx_8)
                
                void* ecx_9 = *(edi_1 + 0xc)
                
                if (ecx_9 != 0)
                    vFunc_0 = sub_4f01b0(ecx_9)
                
                return (*(vFunc_0[0x1d]->vFunc_0 + 0x1c))(1)

return result
