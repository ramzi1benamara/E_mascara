﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::MW_CPP_UWP_SampleApp::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}


/// <summary>
/// Auto generated class for compiled bindings.
/// </summary>
class MW_CPP_UWP_SampleApp::MainPage::MainPage_obj3_Bindings 
    : public ::XamlBindingInfo::XamlBindingsBase<::Windows::Devices::Bluetooth::BluetoothLEDevice>
{
public:
    MainPage_obj3_Bindings()
    {
    }

    void Connect(int __connectionId, ::Platform::Object^ __target)
    {
        switch(__connectionId)
        {
            case 4:
                this->obj4 = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
                break;
            case 5:
                this->obj5 = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
                break;
            case 6:
                this->obj6 = safe_cast<::Windows::UI::Xaml::Documents::Run^>(__target);
                break;
        }
    }

    void ResetTemplate()
    {
    }

    int ProcessBindings(::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs^ args)
    {
        int nextPhase = -1;
        switch(args->Phase)
        {
            case 0:
                nextPhase = -1;
                this->SetDataRoot(static_cast<::Windows::Devices::Bluetooth::BluetoothLEDevice^>(args->Item));
                if (this->_dataContextChangedToken.Value != 0)
                {
                    safe_cast<::Windows::UI::Xaml::FrameworkElement^>(args->ItemContainer->ContentTemplateRoot)->DataContextChanged -= this->_dataContextChangedToken;
                    this->_dataContextChangedToken.Value = 0;
                }
                this->_isInitialized = true;
                break;
        }
        this->Update_((::Windows::Devices::Bluetooth::BluetoothLEDevice^) args->Item, (1 << args->Phase));
        return nextPhase;
    }
private:
    // Fields for each control that has bindings.
    ::Windows::UI::Xaml::Controls::TextBlock^ obj4;
    ::Windows::UI::Xaml::Documents::Run^ obj5;
    ::Windows::UI::Xaml::Documents::Run^ obj6;

    // Update methods for each path node used in binding steps.
    void Update_(::Windows::Devices::Bluetooth::BluetoothLEDevice^ obj, int phase)
    {
        if (obj != nullptr)
        {
            if ((phase & (NOT_PHASED | (1 << 0))) != 0)
            {
                this->Update_Name(obj->Name, phase);
                this->Update_ConnectionStatus(obj->ConnectionStatus, phase);
                this->Update_DeviceId(obj->DeviceId, phase);
            }
        }
    }
    void Update_Name(::Platform::String^ obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Controls_TextBlock_Text(this->obj4, obj, nullptr);
        }
    }
    void Update_ConnectionStatus(::Windows::Devices::Bluetooth::BluetoothConnectionStatus obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Documents_Run_Text(this->obj5, obj.ToString(), nullptr);
        }
    }
    void Update_DeviceId(::Platform::String^ obj, int phase)
    {
        if((phase & ((1 << 0) | NOT_PHASED )) != 0)
        {
            ::XamlBindingInfo::XamlBindingSetters::Set_Windows_UI_Xaml_Documents_Run_Text(this->obj6, obj, nullptr);
        }
    }
};

void ::MW_CPP_UWP_SampleApp::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->pairedDevicesListView = safe_cast<::Windows::UI::Xaml::Controls::ListView^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::ListView^>(this->pairedDevicesListView))->SelectionChanged += ref new ::Windows::UI::Xaml::Controls::SelectionChangedEventHandler(this, (void (::MW_CPP_UWP_SampleApp::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Controls::SelectionChangedEventArgs^))&MainPage::SelectedBtleDevice);
            }
            break;
        case 2:
            {
                ::Windows::UI::Xaml::Controls::Button^ element2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element2))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::MW_CPP_UWP_SampleApp::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::refreshDevices);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::MW_CPP_UWP_SampleApp::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    ::XamlBindingInfo::XamlBindings^ bindings = nullptr;
    switch (__connectionId)
    {
        case 3:
            {
                ::Windows::UI::Xaml::Controls::StackPanel^ element3 = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(__target);
                MainPage_obj3_Bindings* objBindings = new MainPage_obj3_Bindings();
                objBindings->SetDataRoot(element3->DataContext);
                bindings = ref new ::XamlBindingInfo::XamlBindings(objBindings);
                bindings->SubscribeForDataContextChanged(element3);
                ::Windows::UI::Xaml::DataTemplate::SetExtensionInstance(element3, bindings);
            }
            break;
    }
    return bindings;
}


