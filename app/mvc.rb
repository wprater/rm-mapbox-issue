class MapViewController < UIViewController
  def viewDidLoad
    super

    tiles = RMMapBoxSource.alloc.initWithMapID 'examples.map-z2effxa8'
    map = RMMapView.alloc.initWithFrame(UIScreen.mainScreen.bounds,
                                        andTilesource: tiles)
    map.zoom = 14
    map.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth
    map.delegate = self
    self.view.addSubview(map)

    center_co = CLLocationCoordinate2D.new(40.7143528,-74.00597309999999)
    map.setCenterCoordinate(center_co, animated: true)
  end
end
