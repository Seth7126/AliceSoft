// 函数: sub_4efe30
// 地址: 0x4efe30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_4efe79:
        
        if (vFunc_0 != 0)
            goto label_4efe7f
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            result = sub_4e7720(result_1, arg1)
            vFunc_0 = result
            goto label_4efe79
        
    label_4efe7f:
        result = sub_4a2d30(vFunc_0)
        
        if (result != 0)
            void* edi_1 = result[0x128]
            
            if (edi_1 != 0)
                void* ecx_8 = *(edi_1 + 4)
                
                if (ecx_8 != 0)
                    sub_4a4310(ecx_8)
                
                void* ecx_9 = *(edi_1 + 0xc)
                
                if (ecx_9 != 0)
                    sub_4a4310(ecx_9)
                
                return (*(vFunc_0[0x17]->vFunc_0 + 0x1c))(1)

return result
