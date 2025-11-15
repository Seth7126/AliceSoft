// 函数: sub_5e5320
// 地址: 0x5e5320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct IGraphPlugin::sealengine::CApp::VTable** var_4 = arg1
int32_t* ecx = data_7fd4cc
data_7fd4cc = 0

if (ecx != 0)
    (*(*ecx + 0x18))(1)

struct IGraphPlugin::sealengine::CApp::VTable*** eax_2 = sub_5f0600(&var_4)

if (eax_2 != &data_7fd4cc)
    struct IGraphPlugin::sealengine::CApp::VTable** edx_1 = *eax_2
    *eax_2 = nullptr
    int32_t* ecx_2 = data_7fd4cc
    data_7fd4cc = edx_1
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 0x18))(1)

struct IGraphPlugin::sealengine::CApp::VTable** ecx_3 = var_4

if (ecx_3 != 0)
    (*ecx_3)->vFunc_6(1)

*(data_7fd4cc + 0xc) = arg1
void* result
result.b = 1
return result
