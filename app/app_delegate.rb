class AppDelegate
  def application(application, didFinishLaunchingWithOptions:launchOptions)
    @window = UIWindow.alloc.initWithFrame(UIScreen.mainScreen.bounds)

    mvc = MapViewController.alloc.init

    @window.rootViewController = mvc
    @window.makeKeyAndVisible

    true
  end
end
