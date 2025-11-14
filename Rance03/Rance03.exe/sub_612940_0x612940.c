// 函数: sub_612940
// 地址: 0x612940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
struct IInterface::graphengined3d11::CPixelShader::VTable** result

if (*(arg1 + 0x4c) == 0)
    result = sub_614400(arg1, arg2, arg3)
    *(arg1 + 0x4c) = result
    
    if (result != 0)
        void* edi = result[2]
        int32_t esi_1 = result[3]
        
        if (*(edi + 0x150) != esi_1)
            int32_t* eax = *(edi + 0x38)
            (*(*eax + 0x24))(eax, esi_1, 0, 0)
            *(edi + 0x150) = esi_1
        
        result.b = 1
        return result

result.b = 0
return result
