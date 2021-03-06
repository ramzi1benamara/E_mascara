﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class StackPanel;
                ref class ListView;
                ref class ToggleSwitch;
            }
        }
    }
}

namespace MW_CPP_UWP_SampleApp
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class DeviceInfo : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::Grid^ LedButtons;
        private: ::Windows::UI::Xaml::Controls::Grid^ HapticButtons;
        private: ::Windows::UI::Xaml::Controls::Grid^ MainView;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ sensorsSwitch;
        private: ::Windows::UI::Xaml::Controls::ListView^ outputListView;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ swAcc;
        private: ::Windows::UI::Xaml::Controls::ToggleSwitch^ swGyro;
    };
}

