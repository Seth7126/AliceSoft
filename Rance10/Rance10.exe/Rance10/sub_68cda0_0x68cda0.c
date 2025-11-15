// 函数: sub_68cda0
// 地址: 0x68cda0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CPixelShader::VTable** result

if (*(arg1 + 0x4c) == 0)
    result = sub_68e740(arg1, arg2, arg3)
    *(arg1 + 0x4c) = result
    
    if (result != 0)
        int32_t esi_1 = result[3]
        void* edi = result[2]
        
        if (*(edi + 0x15c) != esi_1)
            int32_t* eax = *(edi + 0x38)
            (*(*eax + 0x24))(eax, esi_1, 0, 0)
            *(edi + 0x15c) = esi_1
        
        result.b = 1
        return result

result.b = 0
return result
